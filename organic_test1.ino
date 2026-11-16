
#include <Organic_vs_Conventional_TinyML_inferencing.h>

static const float features[] = {
    0.74, 0.652, 0.831, 0.541, 0.79, 0.68
};

int raw_feature_get_data(size_t offset, size_t length, float *out_ptr) {
    memcpy(out_ptr, features + offset, length * sizeof(float));
    return 0;
}

void setup() {
    Serial.begin(115200);
    Serial.println("Organic Food TinyML Test");
}

void loop() {
    ei_impulse_result_t result = { 0 };

    signal_t signal;
    signal.total_length = sizeof(features) / sizeof(float);
    signal.get_data = &raw_feature_get_data;

    EI_IMPULSE_ERROR error = run_classifier(&signal, &result, false);

    if (error != EI_IMPULSE_OK) {
        Serial.println("Classification failed!");
        delay(2000);
        return;
    }

    Serial.println("Predictions:");

    for (uint16_t i = 0; i < EI_CLASSIFIER_LABEL_COUNT; i++) {
        Serial.print(ei_classifier_inferencing_categories[i]);
        Serial.print(": ");
        Serial.println(result.classification[i].value);
    }

    delay(3000);
}

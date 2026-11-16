# Organic vs Conventional Food Screening using TinyML

## Project Overview
This project explores a portable food-screening system using spectral data and TinyML to classify samples as organic or conventional.

## Technologies
- Edge Impulse
- Neural Network Classifier
- Arduino IDE
- ESP32 (planned hardware)

## Phase 2: TinyML Pipeline
- Created synthetic spectral datasets for organic and conventional classes.
- Used six spectral features for classification.
- Trained a Neural Network Classifier in Edge Impulse.
- Exported an Arduino library.
- Created an Arduino test sketch.
- Successfully compiled the sketch for ESP32.

## Dataset
The current datasets are synthetic and were created for testing the TinyML pipeline.

## Current Status
Phase 2 pipeline setup and Arduino compilation are complete.

Physical hardware testing and real-world data collection have not yet been completed.

## Important Limitation
This is an experimental screening project. Synthetic data and model predictions do not prove that a food sample is organic or pesticide-free. Reliable real-world testing requires actual sensor measurements and validated sample labels.

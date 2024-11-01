#include "EQControl.h"

EQControl::EQControl() {
    setDefaultValues();
}

void EQControl::setDefaultValues() {
    for (int i = 0; i < 5; ++i) {
        frequencyBands[i] = 0.0f;
    }
}

void EQControl::paint(juce::Graphics& g) {
    // Painting logic here
}

void EQControl::handleExtremeValues(float frequencyBands[5]) {
    for (int i = 0; i < 5; ++i) {
        this->frequencyBands[i] = juce::jlimit(-12.0f, 12.0f, frequencyBands[i]);
    }
}

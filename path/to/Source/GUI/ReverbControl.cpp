#include "ReverbControl.h"

ReverbControl::ReverbControl() {
    setDefaultValues();
}

void ReverbControl::setDefaultValues() {
    wetDryMix = 0.5f;
    delayTime = 0.5f;
    numberOfDelays = 1;
}

void ReverbControl::paint(juce::Graphics& g) {
    // Painting logic here
}

void ReverbControl::handleExtremeValues(float wetDryMix, float delayTime, int numberOfDelays) {
    this->wetDryMix = juce::jlimit(0.0f, 1.0f, wetDryMix);
    this->delayTime = juce::jlimit(0.1f, 5.0f, delayTime);
    this->numberOfDelays = juce::jlimit(1, 10, numberOfDelays);
}

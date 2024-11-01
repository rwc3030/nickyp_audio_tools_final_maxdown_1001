#include "CompressionControl.h"

CompressionControl::CompressionControl() {
    setDefaultValues();
}

void CompressionControl::setDefaultValues() {
    threshold = 0.0f;
    ratio = 1.0f;
    attack = 0.1f;
    release = 0.1f;
}

void CompressionControl::paint(juce::Graphics& g) {
    // Painting logic here
}

void CompressionControl::handleExtremeValues(float threshold, float ratio, float attack, float release) {
    this->threshold = juce::jlimit(-60.0f, 0.0f, threshold);
    this->ratio = juce::jlimit(1.0f, 20.0f, ratio);
    this->attack = juce::jlimit(0.01f, 1.0f, attack);
    this->release = juce::jlimit(0.1f, 5.0f, release);
}

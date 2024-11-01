#include "LimiterControl.h"

LimiterControl::LimiterControl() {
    setDefaultValues();
}

void LimiterControl::setDefaultValues() {
    maxVolume = 0.0f;
    attack = 0.1f;
}

void LimiterControl::paint(juce::Graphics& g) {
    // Painting logic here
}

void LimiterControl::handleExtremeValues(float maxVolume, float attack) {
    this->maxVolume = juce::jlimit(-60.0f, 0.0f, maxVolume);
    this->attack = juce::jlimit(0.01f, 1.0f, attack);
}

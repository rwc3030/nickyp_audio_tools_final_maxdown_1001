#include "AdvancedMixingControls.h"
#include "EQControl.h"
#include "CompressionControl.h"
#include "ReverbControl.h"
#include "LimiterControl.h"

AdvancedMixingControls::AdvancedMixingControls() {
    eq.setDefaultValues();
    compressor.setDefaultValues();
    reverb.setDefaultValues();
    limiter.setDefaultValues();
}

void AdvancedMixingControls::paint(juce::Graphics& g) {
    g.fillAll(juce::Colours::black);
    eq.paint(g);
    compressor.paint(g);
    reverb.paint(g);
    limiter.paint(g);
}

void AdvancedMixingControls::setDefaultValues() {
    eq.setDefaultValues();
    compressor.setDefaultValues();
    reverb.setDefaultValues();
    limiter.setDefaultValues();
}

void AdvancedMixingControls::handleExtremeValues() {
    eq.handleExtremeValues(eq.getFrequencyBands());
    compressor.handleExtremeValues(compressor.getThreshold(), compressor.getRatio(), compressor.getAttack(), compressor.getRelease());
    reverb.handleExtremeValues(reverb.getWetDryMix(), reverb.getDelayTime(), reverb.getNumberOfDelays());
    limiter.handleExtremeValues(limiter.getMaxVolume(), limiter.getAttack());
}

#include "AdvancedMixingControls.h"

AdvancedMixingControls::AdvancedMixingControls() {
    // Initialize controls
    setDefaultValues();
}

void AdvancedMixingControls::setDefaultValues() {
    // Set default values for EQ, compression, reverb, and limiting
    eq.setDefaultValues();
    compressor.setDefaultValues();
    reverb.setDefaultValues();
    limiter.setDefaultValues();
}

void AdvancedMixingControls::paint(juce::Graphics& g) {
    // Paint the controls
    eq.paint(g);
    compressor.paint(g);
    reverb.paint(g);
    limiter.paint(g);
}

void AdvancedMixingControls::resized() {
    // Resize the controls
    eq.setBounds(getLocalBounds().removeFromTop(100));
    compressor.setBounds(getLocalBounds().removeFromTop(100));
    reverb.setBounds(getLocalBounds().removeFromTop(100));
    limiter.setBounds(getLocalBounds().removeFromTop(100));
}

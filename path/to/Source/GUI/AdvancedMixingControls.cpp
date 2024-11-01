#include "AdvancedMixingControls.h"

AdvancedMixingControls::AdvancedMixingControls()
{
    // Initialize controls
    initializeControls();
}

void AdvancedMixingControls::initializeControls()
{
    // EQ Control
    eqControl = new EQControl();
    addAndMakeVisible(eqControl);

    // Compression Control
    compressionControl = new CompressionControl();
    addAndMakeVisible(compressionControl);

    // Reverb Control
    reverbControl = new ReverbControl();
    addAndMakeVisible(reverbControl);

    // Limiter Control
    limiterControl = new LimiterControl();
    addAndMakeVisible(limiterControl);
}

void AdvancedMixingControls::resized()
{
    // Layout controls
    auto area = getLocalBounds();
    eqControl->setBounds(area.removeFromTop(100));
    compressionControl->setBounds(area.removeFromTop(100));
    reverbControl->setBounds(area.removeFromTop(100));
    limiterControl->setBounds(area.removeFromTop(100));
}

void AdvancedMixingControls::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
}

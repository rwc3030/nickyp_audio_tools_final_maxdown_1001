#include "AdvancedMixingControls.h"
#include <JuceHeader.h>

AdvancedMixingControls::AdvancedMixingControls()
{
    // Initialize controls
    eqControl = new EQControl();
    compressionControl = new CompressionControl();
    reverbControl = new ReverbControl();
    limiterControl = new LimiterControl();

    addAndMakeVisible(eqControl);
    addAndMakeVisible(compressionControl);
    addAndMakeVisible(reverbControl);
    addAndMakeVisible(limiterControl);
}

void AdvancedMixingControls::resized()
{
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

void AdvancedMixingControls::initializeControls()
{
    // Initialize each control with default values
    eqControl->setDefaultValues();
    compressionControl->setDefaultValues();
    reverbControl->setDefaultValues();
    limiterControl->setDefaultValues();
}

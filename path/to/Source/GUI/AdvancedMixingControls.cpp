#include "AdvancedMixingControls.h"
#include <JuceHeader.h>

AdvancedMixingControls::AdvancedMixingControls()
{
    // Initialize controls
    initializeControls();
}

void AdvancedMixingControls::initializeControls()
{
    // Create and configure EQ control
    eqControl = new EQControl();
    addAndMakeVisible(eqControl);

    // Create and configure Compression control
    compressionControl = new CompressionControl();
    addAndMakeVisible(compressionControl);

    // Create and configure Reverb control
    reverbControl = new ReverbControl();
    addAndMakeVisible(reverbControl);

    // Create and configure Limiter control
    limiterControl = new LimiterControl();
    addAndMakeVisible(limiterControl);
}

void AdvancedMixingControls::resized()
{
    // Set bounds for each control
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

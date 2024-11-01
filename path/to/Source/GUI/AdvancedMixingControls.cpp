#include "AdvancedMixingControls.h"
#include <JuceHeader.h>

AdvancedMixingControls::AdvancedMixingControls()
{
    // Initialize UI components
    addAndMakeVisible(eqSlider);
    addAndMakeVisible(compressionSlider);
    addAndMakeVisible(reverbSlider);
    addAndMakeVisible(limiterSlider);
}

void AdvancedMixingControls::resized()
{
    // Set bounds for UI components
    eqSlider.setBounds(10, 10, getWidth() - 20, 30);
    compressionSlider.setBounds(10, 50, getWidth() - 20, 30);
    reverbSlider.setBounds(10, 90, getWidth() - 20, 30);
    limiterSlider.setBounds(10, 130, getWidth() - 20, 30);
}

void AdvancedMixingControls::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::white);
    g.drawText("Advanced Mixing Controls", getLocalBounds(), juce::Justification::centred, true);
}

// Slider initialization
void AdvancedMixingControls::initializeSliders()
{
    eqSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    eqSlider.setRange(20.0, 20000.0);
    eqSlider.setValue(1000.0);
    eqSlider.setTextValueSuffix(" Hz");

    compressionSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    compressionSlider.setRange(1.0, 10.0);
    compressionSlider.setValue(2.0);
    compressionSlider.setTextValueSuffix(" : 1");

    reverbSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    reverbSlider.setRange(0.0, 100.0);
    reverbSlider.setValue(50.0);
    reverbSlider.setTextValueSuffix(" %");

    limiterSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    limiterSlider.setRange(-60.0, 0.0);
    limiterSlider.setValue(-3.0);
    limiterSlider.setTextValueSuffix(" dB");
}

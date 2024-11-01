#include "AdvancedMixingControls.h"
#include <JuceHeader.h>

AdvancedMixingControls::AdvancedMixingControls()
{
    initializeControls();
}

void AdvancedMixingControls::resized()
{
    // Layout the controls
    auto area = getLocalBounds();
    eqSlider.setBounds(area.removeFromTop(50));
    compressionSlider.setBounds(area.removeFromTop(50));
    reverbSlider.setBounds(area.removeFromTop(50));
    limiterSlider.setBounds(area.removeFromTop(50));
}

void AdvancedMixingControls::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::white);
    g.drawText("Advanced Mixing Controls", getLocalBounds(), juce::Justification::centred, true);
}

void AdvancedMixingControls::initializeControls()
{
    // Initialize EQ Slider
    eqSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    eqSlider.setRange(20.0, 20000.0);
    eqSlider.setTextValueSuffix(" Hz");
    addAndMakeVisible(eqSlider);

    // Initialize Compression Slider
    compressionSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    compressionSlider.setRange(1.0, 10.0);
    compressionSlider.setTextValueSuffix(" :1");
    addAndMakeVisible(compressionSlider);

    // Initialize Reverb Slider
    reverbSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    reverbSlider.setRange(0.0, 100.0);
    reverbSlider.setTextValueSuffix(" %");
    addAndMakeVisible(reverbSlider);

    // Initialize Limiter Slider
    limiterSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    limiterSlider.setRange(-60.0, 0.0);
    limiterSlider.setTextValueSuffix(" dB");
    addAndMakeVisible(limiterSlider);
}

#include "AdvancedMixingControls.h"
#include <JuceHeader.h>

AdvancedMixingControls::AdvancedMixingControls()
{
    // Initialize EQ
    eqSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    eqSlider.setRange(20.0, 20000.0);
    eqSlider.setValue(1000.0);
    addAndMakeVisible(eqSlider);
    
    // Initialize Compression Engine
    compressionSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    compressionSlider.setRange(1.0, 10.0);
    compressionSlider.setValue(5.0);
    addAndMakeVisible(compressionSlider);
    
    // Initialize Reverb Module
    reverbSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    reverbSlider.setRange(0.0, 100.0);
    reverbSlider.setValue(50.0);
    addAndMakeVisible(reverbSlider);
    
    // Initialize Limiting Section
    limitSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    limitSlider.setRange(-60.0, 0.0);
    limitSlider.setValue(-3.0);
    addAndMakeVisible(limitSlider);
}

void AdvancedMixingControls::resized()
{
    auto area = getLocalBounds();
    eqSlider.setBounds(area.removeFromTop(50));
    compressionSlider.setBounds(area.removeFromTop(50));
    reverbSlider.setBounds(area.removeFromTop(50));
    limitSlider.setBounds(area.removeFromTop(50));
}

void AdvancedMixingControls::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::white);
    g.drawText("EQ", eqSlider.getX(), eqSlider.getY() - 20, eqSlider.getWidth(), 20, juce::Justification::centred);
    g.drawText("Compression", compressionSlider.getX(), compressionSlider.getY() - 20, compressionSlider.getWidth(), 20, juce::Justification::centred);
    g.drawText("Reverb", reverbSlider.getX(), reverbSlider.getY() - 20, reverbSlider.getWidth(), 20, juce::Justification::centred);
    g.drawText("Limiter", limitSlider.getX(), limitSlider.getY() - 20, limitSlider.getWidth(), 20, juce::Justification::centred);
}

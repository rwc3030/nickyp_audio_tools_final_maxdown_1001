#include "MainComponent.h"
#include "AdvancedMixingControls.h"

MainComponent::MainComponent()
{
    setSize(800, 600);
    addAndMakeVisible(mixingControls);
}

void MainComponent::resized()
{
    mixingControls.setBounds(getLocalBounds());
}

void MainComponent::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::darkgrey);
}

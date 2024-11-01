#include "MainComponent.h"
#include "AdvancedMixingControls.h"

MainComponent::MainComponent() {
    setSize(800, 600);
    addAndMakeVisible(advancedMixingControls);
}

void MainComponent::paint(juce::Graphics& g) {
    g.fillAll(juce::Colours::grey);
}

void MainComponent::resized() {
    advancedMixingControls.setBounds(getLocalBounds());
}

AdvancedMixingControls advancedMixingControls;

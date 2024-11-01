#include "AdvancedSettingsComponent.h"
#include <JuceHeader.h>

AdvancedSettingsComponent::AdvancedSettingsComponent()
{
    // Create UI elements
    addAndMakeVisible(advancedSettingLabel);
    advancedSettingLabel.setText("Advanced Settings", juce::dontSendNotification);
    advancedSettingLabel.setFont(juce::Font(16.0f, juce::Font::bold));

    addAndMakeVisible(settingToggle);
    settingToggle.setButtonText("Enable Advanced Features");
    settingToggle.setToggleState(false, juce::dontSendNotification);
}

void AdvancedSettingsComponent::resized()
{
    auto area = getLocalBounds();
    advancedSettingLabel.setBounds(area.removeFromTop(30));
    settingToggle.setBounds(area.removeFromTop(30));
}

void AdvancedSettingsComponent::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::lightgrey);
}

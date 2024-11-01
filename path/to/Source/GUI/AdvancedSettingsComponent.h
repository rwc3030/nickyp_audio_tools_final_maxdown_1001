#ifndef ADVANCEDSETTINGS_H
#define ADVANCEDSETTINGS_H

#include <JuceHeader.h>

class AdvancedSettingsComponent : public juce::Component
{
public:
    AdvancedSettingsComponent();
    void resized() override;
    void paint(juce::Graphics& g) override;

private:
    juce::Label advancedSettingLabel;
    juce::ToggleButton settingToggle;
};

#endif // ADVANCEDSETTINGS_H

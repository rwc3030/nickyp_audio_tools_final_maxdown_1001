#ifndef ADVANCEDMIXINGCONTROLS_H
#define ADVANCEDMIXINGCONTROLS_H

#include <JuceHeader.h>

class AdvancedMixingControls : public juce::Component
{
public:
    AdvancedMixingControls();
    void resized() override;
    void paint(juce::Graphics& g) override;

private:
    juce::Slider eqSlider;
    juce::Slider compressionSlider;
    juce::Slider reverbSlider;
    juce::Slider limitSlider;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AdvancedMixingControls)
};

#endif // ADVANCEDMIXINGCONTROLS_H

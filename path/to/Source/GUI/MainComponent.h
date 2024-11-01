#ifndef MAINCOMPONENT_H
#define MAINCOMPONENT_H

#include <JuceHeader.h>
#include "AdvancedMixingControls.h"

class MainComponent : public juce::Component
{
public:
    MainComponent();
    void resized() override;
    void paint(juce::Graphics& g) override;

private:
    AdvancedMixingControls mixingControls;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};

#endif // MAINCOMPONENT_H

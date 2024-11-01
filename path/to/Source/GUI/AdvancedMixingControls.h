#ifndef ADVANCEDMIXINGCONTROLS_H
#define ADVANCEDMIXINGCONTROLS_H

#include <JuceHeader.h>
#include "EQControl.h"
#include "CompressionControl.h"
#include "ReverbControl.h"
#include "LimiterControl.h"

class AdvancedMixingControls : public juce::Component
{
public:
    AdvancedMixingControls();
    void resized() override;
    void paint(juce::Graphics& g) override;
    void initializeControls();

private:
    EQControl* eqControl;
    CompressionControl* compressionControl;
    ReverbControl* reverbControl;
    LimiterControl* limiterControl;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AdvancedMixingControls)
};

#endif // ADVANCEDMIXINGCONTROLS_H

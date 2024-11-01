#ifndef ADVANCEDMIXINGCONTROLS_H
#define ADVANCEDMIXINGCONTROLS_H

#include <JuceHeader.h>
#include "EQControl.h"
#include "CompressionControl.h"
#include "ReverbControl.h"
#include "LimiterControl.h"

class AdvancedMixingControls : public juce::Component {
public:
    AdvancedMixingControls();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;
    void resized() override;

private:
    EQControl eq;
    CompressionControl compressor;
    ReverbControl reverb;
    LimiterControl limiter;
};

#endif // ADVANCEDMIXINGCONTROLS_H

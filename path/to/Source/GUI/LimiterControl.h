#ifndef LIMITERCONTROL_H
#define LIMITERCONTROL_H

#include <JuceHeader.h>

class LimiterControl : public juce::Component
{
public:
    LimiterControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;
};

#endif // LIMITERCONTROL_H

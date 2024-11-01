#ifndef REVERBCONTROL_H
#define REVERBCONTROL_H

#include <JuceHeader.h>

class ReverbControl : public juce::Component
{
public:
    ReverbControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;

private:
    float wetDryMix;
    float delayTime;
    int numberOfDelays;
};

#endif // REVERBCONTROL_H

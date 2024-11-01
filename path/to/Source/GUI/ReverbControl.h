#ifndef REVERBCONTROL_H
#define REVERBCONTROL_H

#include <JuceHeader.h>

class ReverbControl : public juce::Component
{
public:
    ReverbControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;
    void handleExtremeValues(float wetDryMix, float delayTime, int numberOfDelays);

    // Getter methods
    float getWetDryMix() const { return wetDryMix; }
    float getDelayTime() const { return delayTime; }
    int getNumberOfDelays() const { return numberOfDelays; }

private:
    float wetDryMix;
    float delayTime;
    int numberOfDelays;
};

#endif // REVERBCONTROL_H

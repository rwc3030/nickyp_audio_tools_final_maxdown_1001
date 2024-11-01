#ifndef LIMITERCONTROL_H
#define LIMITERCONTROL_H

#include <JuceHeader.h>

class LimiterControl : public juce::Component
{
public:
    LimiterControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;
    void handleExtremeValues(float maxVolume, float attack);

    // Getter methods
    float getMaxVolume() const { return maxVolume; }
    float getAttack() const { return attack; }

private:
    float maxVolume;
    float attack;
};

#endif // LIMITERCONTROL_H

#ifndef EQCONTROL_H
#define EQCONTROL_H

#include <JuceHeader.h>

class EQControl : public juce::Component
{
public:
    EQControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;

private:
    float frequencyBands[5]; // Example for 5 bands
};

#endif // EQCONTROL_H

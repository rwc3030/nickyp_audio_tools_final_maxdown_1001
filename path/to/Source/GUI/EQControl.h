#ifndef EQCONTROL_H
#define EQCONTROL_H

#include <JuceHeader.h>

class EQControl : public juce::Component
{
public:
    EQControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;
    void handleExtremeValues(float frequencyBands[5]);

    // Getter method
    const float* getFrequencyBands() const { return frequencyBands; }

private:
    float frequencyBands[5]; // Example for 5 bands
};

#endif // EQCONTROL_H

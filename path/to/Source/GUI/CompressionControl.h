#ifndef COMPRESSIONCONTROL_H
#define COMPRESSIONCONTROL_H

#include <JuceHeader.h>

class CompressionControl : public juce::Component
{
public:
    CompressionControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;

private:
    float threshold;
    float ratio;
    float attack;
    float release;
};

#endif // COMPRESSIONCONTROL_H

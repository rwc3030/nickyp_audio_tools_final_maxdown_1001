#ifndef COMPRESSIONCONTROL_H
#define COMPRESSIONCONTROL_H

#include <JuceHeader.h>

class CompressionControl : public juce::Component
{
public:
    CompressionControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;
};

#endif // COMPRESSIONCONTROL_H

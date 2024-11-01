#ifndef COMPRESSIONCONTROL_H
#define COMPRESSIONCONTROL_H

#include <JuceHeader.h>

class CompressionControl : public juce::Component
{
public:
    CompressionControl();
    void setDefaultValues();
    void paint(juce::Graphics& g) override;
    void handleExtremeValues(float threshold, float ratio, float attack, float release;

    // Getter methods
    float getThreshold() const { return threshold; }
    float getRatio() const { return ratio; }
    float getAttack() const { return attack; }
    float getRelease() const { return release; }

private:
    float threshold;
    float ratio;
    float attack;
    float release;
};

#endif // COMPRESSIONCONTROL_H

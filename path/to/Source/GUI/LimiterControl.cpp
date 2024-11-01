#include "LimiterControl.h"

LimiterControl::LimiterControl()
{
    setDefaultValues();
}

void LimiterControl::setDefaultValues()
{
    maxVolume = 0.0f; // Example default value
    attack = 10.0f; // Example default value
}

void LimiterControl::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::blue);
    // Additional painting code can be added here
}

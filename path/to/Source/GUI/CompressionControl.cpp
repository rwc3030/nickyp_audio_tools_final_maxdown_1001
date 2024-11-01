#include "CompressionControl.h"

CompressionControl::CompressionControl()
{
    setDefaultValues();
}

void CompressionControl::setDefaultValues()
{
    threshold = -10.0f; // Example default value
    ratio = 4.0f; // Example default value
    attack = 10.0f; // Example default value
    release = 100.0f; // Example default value
}

void CompressionControl::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::grey);
    // Additional painting code can be added here
}

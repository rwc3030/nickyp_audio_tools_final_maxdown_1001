#include "ReverbControl.h"

ReverbControl::ReverbControl()
{
    setDefaultValues();
}

void ReverbControl::setDefaultValues()
{
    wetDryMix = 0.5f; // Example default value
    delayTime = 0.5f; // Example default value
    numberOfDelays = 2; // Example default value
}

void ReverbControl::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::lightgrey);
    // Additional painting code can be added here
}

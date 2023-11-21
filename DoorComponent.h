/*
  ==============================================================================

    DoorComponent.h
    Created: 20 Nov 2023 11:20:56pm
    Author:  Dele

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class DoorComponent  : public juce::Component
{
public:
    DoorComponent();
    ~DoorComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DoorComponent)
};

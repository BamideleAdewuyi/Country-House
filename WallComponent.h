/*
  ==============================================================================

    WallComponent.h
    Created: 18 Nov 2023 4:21:14pm
    Author:  Dele

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "DoorComponent.h"

//==============================================================================
/*
*/
class WallComponent  : public juce::Component
{
public:
    WallComponent();
    ~WallComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WallComponent)
    // Create door for wall of house
    DoorComponent door;
};

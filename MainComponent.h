#pragma once

#include <JuceHeader.h>
// To include the wall component:
#include "WallComponent.h"
// To include the grass component
#include "GrassComponent.h"
// To include the roof component
#include "RoofComponent.h"
// To include the sun component
#include "SunComponent.h"
// To include the text component
#include "TextComponent.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
    // Create wall component
    WallComponent wall;
    // Create grass component
    GrassComponent grass;
    // Create roof object
    RoofComponent roof;
    // Create sun object
    SunComponent sun;
    // Create text object
    TextComponent text;
    
};

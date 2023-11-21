/*
  ==============================================================================

    SunComponent.cpp
    Created: 19 Nov 2023 11:59:32pm
    Author:  Dele

  ==============================================================================
*/

#include <JuceHeader.h>
#include "SunComponent.h"

//==============================================================================
SunComponent::SunComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

SunComponent::~SunComponent()
{
}

void SunComponent::paint (juce::Graphics& g)
{
    g.setColour(juce::Colours::yellow);
    // Draw and position sun component. For the position, bear in mind that there
    // is basically an imaginary rectangle around the circle. The x and y coordinates
    // refer to the top left corner of this rectangle. We are positioning this ellipse
    // in the top right of the screen.
    g.drawEllipse(400, 50, 50, 50, 10.0f);
}

void SunComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

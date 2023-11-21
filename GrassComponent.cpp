/*
  ==============================================================================

    GrassComponent.cpp
    Created: 19 Nov 2023 10:57:44pm
    Author:  Dele

  ==============================================================================
*/

#include <JuceHeader.h>
#include "GrassComponent.h"

//==============================================================================
GrassComponent::GrassComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GrassComponent::~GrassComponent()
{
}

// This is where we set the appearance of the component
void GrassComponent::paint (juce::Graphics& g)
{
    g.setColour(juce::Colours::green);
    // We draw a line between two points: drawLine (float startX, float startY, float endX, float endY, float lineThickness)
    g.drawLine(10, 325, getWidth() - 10, 325, 10.0f);
}

void GrassComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

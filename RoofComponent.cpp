/*
  ==============================================================================

    RoofComponent.cpp
    Created: 19 Nov 2023 11:23:58pm
    Author:  Dele

  ==============================================================================
*/

#include <JuceHeader.h>
#include "RoofComponent.h"

//==============================================================================
RoofComponent::RoofComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RoofComponent::~RoofComponent()
{
}

void RoofComponent::paint (juce::Graphics& g)
{
    //Drawing roof component
    g.setColour(juce::Colours::red);
    // We use the Path class here, because we want to make a triangle. Declare instance of class
    // then name it p
    juce::Path p;
    // Start drawing p. It is supposed to be a roof for house. The wall of the house is at 200, 200
    // Note this is the top left corner of the wall. We want the roof to be slightly above the wall
    // So start it at 200 (same x coordinate) and 190 (ten pixels above)
    p.startNewSubPath(200, 190); // This is the starting point of the path we are drawing
    // Start drawing a line. Remember the width of wall is set to 200. So we want to draw bottom
    // of the triangle to the x coordinate 400, while keeping the same y coordinate so the line
    // is straight
    p.lineTo(400, 190);
    // Keep drawing the line. The x is 300 (halfway between 200 and 400). y is just the height of
    // roof
    p.lineTo(300, 140);
    // Close the shape. This just draws a line back to the beginning of p
    p.closeSubPath();
    
    // We can fillPath so it is not an empty triangle. It fills with the colour set by setColour
    g.fillPath(p);
    
    // We must draw it to the screen. g.strokePath(const Path &path, const PathStrokeType &strokeType)
    // First argument is the path object, in this case p. Second can just be a thickness
    g.strokePath(p, juce::PathStrokeType(2.0f));
    
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

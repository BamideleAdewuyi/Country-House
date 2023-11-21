/*
  ==============================================================================

    WallComponent.cpp
    Created: 18 Nov 2023 4:21:14pm
    Author:  Dele

  ==============================================================================
*/

#include <JuceHeader.h>
#include "WallComponent.h"

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(door);

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (juce::Graphics& g)
{
    // Calling a class for managing rectangles. wall is name of the rectangle. (0,0) is its position. 200 is width and 120 is height.
    juce::Rectangle<float> wall(200, 200, 200, 120);
    // Filling the rectangle in checkerboard style. Arguments are: name of rectangle, width squares, height of squares
    // first colour of squares, second colour of squares
    g.fillCheckerBoard(wall, 20, 10, juce::Colours::sandybrown, juce::Colours::saddlebrown);
    g.drawRect(wall);
    // We go to the MainComponent.cpp to make this visible
    
    
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    door.setBounds(getLocalBounds());

}

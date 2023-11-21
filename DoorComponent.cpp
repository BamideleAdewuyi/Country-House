/*
  ==============================================================================

    DoorComponent.cpp
    Created: 20 Nov 2023 11:20:56pm
    Author:  Dele

  ==============================================================================
*/

#include <JuceHeader.h>
#include "DoorComponent.h"

//==============================================================================
DoorComponent::DoorComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

DoorComponent::~DoorComponent()
{
}

void DoorComponent::paint (juce::Graphics& g)
{
    // Calling a class for managing rectangles. wall is name of the rectangle. (20,60) is its position. 200 is width and 120 is height.
    juce::Rectangle<float> door(220,260, 50, 60);
    // Filling the rectangle in
    g.setColour(juce::Colours::red);
    g.fillRect(door);
    g.drawRect(door);
    // We go to the WallComponent.cpp to make this visible
}

void DoorComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

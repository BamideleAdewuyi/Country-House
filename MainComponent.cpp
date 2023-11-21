#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    // Make the rectangle (wall) visible
    addAndMakeVisible(wall);
    // Make the grass visible
    addAndMakeVisible(grass);
    // Make the roof visible
    addAndMakeVisible(roof);
    // Make sun visible
    addAndMakeVisible(sun);
    // Make text visible
    addAndMakeVisible(text);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::skyblue);
}

void MainComponent::resized()
{
    // Set position of child components. In this case we set the position of wall
    // Using getLocalBounds means that the child is set relative to positions of parent component.
    // Look in WallComponent.cpp and see "juce::Rectangle<float> wall(0, 0, 200, 120);".
    // getLocalBounds ensures that the coordinates can be interpreted properly
    wall.setBounds(getLocalBounds());
    grass.setBounds(getLocalBounds());
    roof.setBounds(getLocalBounds());
    sun.setBounds(getLocalBounds());
    text.setBounds(getLocalBounds());
}

/*
  ==============================================================================

    TextComponent.h
    Created: 20 Nov 2023 12:16:00am
    Author:  Dele

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class TextComponent  : public juce::Component
{
public:
    TextComponent();
    ~TextComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TextComponent)
};

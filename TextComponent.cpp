/*
  ==============================================================================

    TextComponent.cpp
    Created: 20 Nov 2023 12:16:00am
    Author:  Dele

  ==============================================================================
*/

#include <JuceHeader.h>
#include "TextComponent.h"

//==============================================================================
TextComponent::TextComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

TextComponent::~TextComponent()
{
}

void TextComponent::paint (juce::Graphics& g)
{
    // We are using the Font class to write some text to the screen. Name font object theFont
    // juce::Font(const String &typefaceName, const String &typefaceStyle, float fontHeight)
    // typefaceName is just the name of the font you want the text to appear in
    // Check font book application for options for typefaceStyle
    // fontHeight is just the height. Remember to type it as 2.0f etc
    juce::Font theFont("Cooper Std", "Black Italic", 50.0f);
    // Must then set the font to the screen.
    g.setFont(theFont);
    // Now we can type the text we want to display
    // g.drawText(<#const String &text#>, <#int x#>, <#int y#>, <#int width#>, <#int height#>, <#Justification justificationType#>)
    g.drawText("Country House", 10, 10, 400, 60, juce::Justification::topLeft);
}

void TextComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

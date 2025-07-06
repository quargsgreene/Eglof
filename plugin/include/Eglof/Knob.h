#pragma once
#include <juce_gui_basics/juce_gui_basics.h>

class Knob : public juce::LookAndFeel_V4
{
public:
    
    Knob(){
        
        setColour(juce::Slider::thumbColourId, juce::Colour(0xff5757));
    }
    
//    void drawRotarySlider (juce::Graphics& g, int x, int y, int width, int height, float sliderPosition, const float rotaryStartAngle, const float rotaryEndAngle, juce::Slider&) override;
};

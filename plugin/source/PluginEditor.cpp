#include "Eglof/PluginEditor.h"
#include "Eglof/PluginProcessor.h"

namespace audio_plugin {
EglofAudioProcessorEditor::EglofAudioProcessorEditor(
    EglofAudioProcessor& p)
    : AudioProcessorEditor(&p), processorRef(p) {
  juce::ignoreUnused(processorRef);
  // Make sure that before the constructor has finished, you've set the
  // editor's size to whatever you need it to be.
        int textBoxSizeX = 75;
        int textBoxSizeY = 25;
        bool readOnly = false;
        
        setSize(850, 500);
        
        addAndMakeVisible(&qRangeSlider);
//        qRangeSlider.setLookAndFeel(&knob);
        qRangeSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
        qRangeSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, readOnly, textBoxSizeX, textBoxSizeY);
        qRangeSlider.setRange(0.1, 10, 0.1);
        qRangeSlider.setValue(1);
        
        addAndMakeVisible(&gainRangeSlider);
//        gainRangeSlider.setLookAndFeel(&knob);
        gainRangeSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
        gainRangeSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, readOnly, textBoxSizeX, textBoxSizeY);
        gainRangeSlider.setRange(0.1, 10, 0.1);
        gainRangeSlider.setValue(1);

        addAndMakeVisible(&cutoffRangeSlider);
//        cutoffRangeSlider.setLookAndFeel(&knob);
        cutoffRangeSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
        cutoffRangeSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, readOnly, textBoxSizeX, textBoxSizeY);
        cutoffRangeSlider.setRange(0.1, 10, 0.1);
        cutoffRangeSlider.setValue(1);
        
        addAndMakeVisible(&resonanceRangeSlider);
//        resonanceRangeSlider.setLookAndFeel(&knob);
        resonanceRangeSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
        resonanceRangeSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, readOnly, textBoxSizeX, textBoxSizeY);
        resonanceRangeSlider.setRange(0.1, 10, 0.1);
        resonanceRangeSlider.setValue(1);q
        
//        addAndMakeVisible(&gainRangeSlider);
//        gainRangeSlider.setLookAndFeel(&knob);
//        gainRangeSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
//        gainRangeSlider.setTextBoxStyle(juce::Slider::TextBoxLeft, false, 25, 25);
//        
//        addAndMakeVisible(&cutoffRangeSlider);
//        cutoffRangeSlider.setLookAndFeel(&knob);
//        cutoffRangeSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
//        cutoffRangeSlider.setTextBoxStyle(juce::Slider::TextBoxLeft, false, 25, 25);
//        
//        addAndMakeVisible(&resonanceRangeSlider);
//        resonanceRangeSlider.setLookAndFeel(&knob);
//        resonanceRangeSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
//        resonanceRangeSlider.setTextBoxStyle(juce::Slider::TextBoxLeft, false, 25, 25);

        
}

EglofAudioProcessorEditor::~EglofAudioProcessorEditor() {}

void EglofAudioProcessorEditor::paint(juce::Graphics& g) {
  // (Our component is opaque, so we must completely fill the background with a
  // solid colour)
  g.fillAll(
      getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

  g.setColour(juce::Colours::white);
  g.setFont(15.0f);
//  g.drawFittedText("Hello World!", getLocalBounds(),
//                   juce::Justification::centred, 1);
}

void EglofAudioProcessorEditor::resized() {
  // This is generally where you'll want to lay out the positions of any
  // subcomponents in your editor..
//    int knobMaxLeft = 100;
//    int knobMaxTop = 150;
//    int knobGap = 50;
//    int knobSizeX = getWidth() - knobMaxLeft - 20;
//    int knobSizeY = 20;
//    
//    qRangeSlider.setBounds(knobMaxLeft + 0 * knobGap, knobMaxTop, knobSizeX, knobSizeY);
//    gainRangeSlider.setBounds(knobMaxLeft + knobGap, knobMaxTop, knobSizeX, knobSizeY);
//    cutoffRangeSlider.setBounds(knobMaxLeft + 2*knobGap, knobMaxTop, knobSizeX, knobSizeY);
//    resonanceRangeSlider.setBounds(knobMaxLeft + 3*knobGap, knobMaxTop, knobSizeX, knobSizeY);
    int marginX = getWidth()/40;
    const int marginY = 15;
    int dialWidth = (getWidth() - marginX)/6;
    int dialHeight = (getWidth() - marginX)/6;
    int gapX = 150;
    
    qRangeSlider.setBounds(marginX, marginY, dialWidth, dialHeight);
    gainRangeSlider.setBounds(marginX + gapX, marginY, dialWidth, dialHeight);
    cutoffRangeSlider.setBounds(marginX + 2 * gapX, marginY, dialWidth, dialHeight);
    resonanceRangeSlider.setBounds(marginX + 3 * gapX, marginY, dialWidth, dialHeight);
}
}  // namespace audio_plugin

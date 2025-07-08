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
        
        setSize(1200, 800);
        
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
        resonanceRangeSlider.setValue(1);
        
        addAndMakeVisible(&presetMenu);
        addAndMakeVisible(&dataColumnMenu1);
        addAndMakeVisible(&dataColumnMenu2);
        addAndMakeVisible(&dataColumnMenu3);
        addAndMakeVisible(&dataColumnMenu4);
        
        float powerButtonSize = 50.f;
        juce::Path powerButtonShape;
        powerButtonShape.addRectangle(0, 0, powerButtonSize, powerButtonSize);
        powerButton.setShape(powerButtonShape, true, true, false);
        addAndMakeVisible(&powerButton);
        
        addAndMakeVisible(&forwardPresetButton);
        addAndMakeVisible(&backwardPresetButton);
        addAndMakeVisible(&compareButton);
        addAndMakeVisible(&copyButton);
        addAndMakeVisible(&pasteButton);
        addAndMakeVisible(&helpButton);
        addAndMakeVisible(&chooseRandomDataButton);
        addAndMakeVisible(&downloadCSVButton);

}

EglofAudioProcessorEditor::~EglofAudioProcessorEditor() {}

void EglofAudioProcessorEditor::paint(juce::Graphics& g) {
  // (Our component is opaque, so we must completely fill the background with a
  // solid colour)
  g.fillAll(
      getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

  g.setColour(juce::Colours::white);
  g.setFont(15.0f);
  g.drawFittedText("Eglof FILTER", getLocalBounds(),
                   juce::Justification::centredTop, 1);

  g.setColour(juce::Colours::purple);
  g.fillRect(dragDrop);
  g.setColour(juce::Colours::white);
  g.drawText("Drag and drop a CSV!", 1000, 35, 190, 200, juce::Justification::centred, true);

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
    int marginX = getWidth()/20;
    int marginY = 90;
    int dialWidth = (getWidth() - marginX)/8;
    int dialHeight = (getWidth() - marginX)/8;
    int menuWidth = (getWidth() - marginX)/4;
    int menuHeight = (getWidth() - marginX)/32;
    int gapX = 150;
    int gapY = gapX/3;
    
    qRangeSlider.setBounds(marginX, marginY, dialWidth, dialHeight);
    gainRangeSlider.setBounds(marginX + gapX, marginY, dialWidth, dialHeight);
    cutoffRangeSlider.setBounds(marginX + 2 * gapX, marginY, dialWidth, dialHeight);
    resonanceRangeSlider.setBounds(marginX + 3 * gapX, marginY, dialWidth, dialHeight);
    
    presetMenu.setBounds(marginX + gapX/3, marginY - 80, menuWidth, menuHeight);
    dataColumnMenu1.setBounds(marginX + 4 * gapX + 15, marginY, menuWidth/2, menuHeight);
    dataColumnMenu2.setBounds(marginX + 5 * gapX + 30, marginY, menuWidth/2, menuHeight);
    dataColumnMenu3.setBounds(marginX + 4 * gapX + 15, marginY + gapY, menuWidth/2, menuHeight);
    dataColumnMenu4.setBounds(marginX + 5 * gapX + 30, marginY + gapY, menuWidth/2, menuHeight);
    
    powerButton.setBounds(0, 0, getWidth()/10, getWidth()/10);
    backwardPresetButton.setBounds(presetMenu.getX(), 11 * presetMenu.getY()/2, presetMenu.getWidth()/6, presetMenu.getHeight());
    forwardPresetButton.setBounds(presetMenu.getX() + gapX/3, 11 * presetMenu.getY()/2, presetMenu.getWidth()/6, presetMenu.getHeight());
    compareButton.setBounds(presetMenu.getX() + 2 * gapX/3, 11 * presetMenu.getY()/2, presetMenu.getWidth()/3, presetMenu.getHeight());
    copyButton.setBounds(presetMenu.getX() + 4 * gapX/3, 11 * presetMenu.getY()/2, presetMenu.getWidth()/6, presetMenu.getHeight());
    pasteButton.setBounds(presetMenu.getX() + 5 * gapX/3, 11 * presetMenu.getY()/2, presetMenu.getWidth()/6, presetMenu.getHeight());
    helpButton.setBounds(dataColumnMenu1.getX(), dataColumnMenu1.getY() - gapY, dataColumnMenu1.getWidth(), dataColumnMenu1.getHeight());
    downloadCSVButton.setBounds(dataColumnMenu2.getX(), dataColumnMenu2.getY() - gapY, dataColumnMenu2.getWidth(), dataColumnMenu2.getHeight());
    chooseRandomDataButton.setBounds(dataColumnMenu1.getX(), dataColumnMenu1.getY() + 2 * gapY, 2 * dataColumnMenu1.getWidth() + 25, dataColumnMenu1.getHeight() + 10);
}
}  // namespace audio_plugin

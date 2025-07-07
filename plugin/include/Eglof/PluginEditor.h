#pragma once

#include "PluginProcessor.h"
#include "Knob.h"
#include "Menu.h"

namespace audio_plugin {

class EglofAudioProcessorEditor : public juce::AudioProcessorEditor {
public:
  explicit EglofAudioProcessorEditor(EglofAudioProcessor&);
  ~EglofAudioProcessorEditor() override;

  void paint(juce::Graphics&) override;
  void resized() override;

private:
  // This reference is provided as a quick way for your editor to
  // access the processor object that created it.
    Knob knob;
    juce::Slider qRangeSlider;
    juce::Slider gainRangeSlider;
    juce::Slider cutoffRangeSlider;
    juce::Slider resonanceRangeSlider;
    
    juce::ComboBox presetMenu;
    juce::ComboBox dataColumnMenu1;
    juce::ComboBox dataColumnMenu2;
    juce::ComboBox dataColumnMenu3;
    juce::ComboBox dataColumnMenu4;
    

  EglofAudioProcessor& processorRef;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(EglofAudioProcessorEditor)
};
}  // namespace audio_plugin

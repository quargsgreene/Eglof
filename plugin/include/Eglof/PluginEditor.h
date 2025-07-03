#pragma once

#include "PluginProcessor.h"

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
  EglofAudioProcessor& processorRef;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(EglofAudioProcessorEditor)
};
}  // namespace audio_plugin

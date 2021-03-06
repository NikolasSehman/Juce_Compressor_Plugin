/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class FirstTestPluginAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    FirstTestPluginAudioProcessorEditor (FirstTestPluginAudioProcessor&);
    ~FirstTestPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FirstTestPluginAudioProcessor& audioProcessor;
    
    Slider threshold;
    Slider ratio;
    Slider attack;
    Slider release;
    Slider makeupGain;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FirstTestPluginAudioProcessorEditor)
};

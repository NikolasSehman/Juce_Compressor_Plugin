/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
FirstTestPluginAudioProcessorEditor::FirstTestPluginAudioProcessorEditor (FirstTestPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (900, 400);
//
   // threshold.addListener(this);
        threshold.setBounds(20, 100, 125, 125);
        threshold.setValue(audioProcessor.threshold);
        threshold.setRange(10.f, 1000.f,1.f);
        threshold.setTextBoxStyle(Slider::TextBoxBelow, false, 75, 25);
        threshold.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
        addAndMakeVisible(threshold);
    
    ratio.setBounds(190, 165, 125, 125);
    ratio.setValue(audioProcessor.threshold);
    ratio.setRange(10.f, 1000.f,1.f);
    ratio.setTextBoxStyle(Slider::TextBoxBelow, false, 75, 25);
    ratio.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    addAndMakeVisible(ratio);
    
    attack.setBounds(370, 100, 125, 125);
    attack.setValue(audioProcessor.threshold);
    attack.setRange(10.f, 1000.f,1.f);
    attack.setTextBoxStyle(Slider::TextBoxBelow, false, 75, 25);
    attack.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    addAndMakeVisible(attack);
    
    release.setBounds(550, 165, 125, 125);
    release.setValue(audioProcessor.threshold);
    release.setRange(10.f, 1000.f,1.f);
    release.setTextBoxStyle(Slider::TextBoxBelow, false, 75, 25);
    release.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    addAndMakeVisible(release);
    
    makeupGain.setBounds(720, 100, 125, 125);
    makeupGain.setValue(audioProcessor.threshold);
    makeupGain.setRange(10.f, 1000.f,1.f);
    makeupGain.setTextBoxStyle(Slider::TextBoxBelow, false, 75, 25);
    makeupGain.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    addAndMakeVisible(makeupGain);
}

FirstTestPluginAudioProcessorEditor::~FirstTestPluginAudioProcessorEditor()
{
}

//==============================================================================
void FirstTestPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::greenyellow);
    g.setFont (15.0f);
    //g.drawFittedText ("Wombatduke INC", getLocalBounds(), juce::Justification::centred, 1);
    g.drawFittedText("Compressor",  410,    25,     100, 25, juce::Justification::centred, 1);
    g.drawFittedText("Threshold",   30,     75,    100, 25, juce::Justification::centred, 1);
    g.drawFittedText("Ratio",       200,    140,    100, 25, juce::Justification::centred, 1);
    g.drawFittedText("Attack",      380,    75,    100, 25, juce::Justification::centred, 1);
    g.drawFittedText("Release",     560,    140,   100, 25, juce::Justification::centred, 1);
    g.drawFittedText("MakeUp Gain", 730,    75,    100, 25, juce::Justification::centred, 1);
}

void FirstTestPluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

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
    setSize (400, 300);
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
    g.drawFittedText("Wombatduke", 50, 50, 100, 100, juce::Justification::centred, 1);
}

void FirstTestPluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

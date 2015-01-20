/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.1

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginGUI.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PluginGUI::PluginGUI (PluginComponentGuiAudioProcessor &p)
    : AudioProcessorEditor (&p), processor(p)
{
    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0.1, 3000, 0);
    slider->setSliderStyle (Slider::Rotary);
    slider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider->setColour (Slider::backgroundColourId, Colours::grey);
    slider->setColour (Slider::trackColourId, Colour (0xb1000000));
    slider->setColour (Slider::rotarySliderFillColourId, Colour (0xdc0000ff));
    slider->setColour (Slider::rotarySliderOutlineColourId, Colour (0xba000000));
    slider->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Mod. Freq.")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 1, 0);
    slider2->setSliderStyle (Slider::Rotary);
    slider2->setTextBoxStyle (Slider::TextBoxBelow, true, 80, 20);
    slider2->setColour (Slider::backgroundColourId, Colours::grey);
    slider2->setColour (Slider::trackColourId, Colour (0xb1000000));
    slider2->setColour (Slider::rotarySliderFillColourId, Colour (0xdc0000ff));
    slider2->setColour (Slider::rotarySliderOutlineColourId, Colour (0xba000000));
    slider2->addListener (this);

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Mod. Depth")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (200, 120);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PluginGUI::~PluginGUI()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    label = nullptr;
    slider2 = nullptr;
    label2 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PluginGUI::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::green);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PluginGUI::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    slider->setBounds (8, 8, 64, 80);
    label->setBounds (8, 96, 80, 24);
    slider2->setBounds (120, 8, 64, 80);
    label2->setBounds (111, 96, 80, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void PluginGUI::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PluginGUI" componentName=""
                 parentClasses="public AudioProcessorEditor" constructorParams="PluginComponentGuiAudioProcessor &amp;p"
                 variableInitialisers="AudioProcessorEditor (&amp;p), processor(p)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="200" initialHeight="120">
  <BACKGROUND backgroundColour="ff008000"/>
  <SLIDER name="new slider" id="848e9ecb02625c17" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="8 8 64 80" bkgcol="ff808080" trackcol="b1000000"
          rotarysliderfill="dc0000ff" rotaryslideroutline="ba000000" min="0.10000000000000000555"
          max="3000" int="0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="93ef1474d9a14c99" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="8 96 80 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Mod. Freq." editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="3ba30c366653530f" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="120 8 64 80" bkgcol="ff808080"
          trackcol="b1000000" rotarysliderfill="dc0000ff" rotaryslideroutline="ba000000"
          min="0" max="1" int="0" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="d7fdb9a1830850c1" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="111 96 80 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Mod. Depth" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

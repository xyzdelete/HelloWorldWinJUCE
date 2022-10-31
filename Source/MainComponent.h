#pragma once

#include <JuceHeader.h>
struct Car
{
    struct CarSeat
    {
        bool seatIsLeather;
    };
    int numberOfWheels;
    bool convertible;
    CarSeat driverSeat;
    CarSeat navigatorsSeat;

    bool switchSeats(CarSeat oldSeat, CarSeat newSeat);

    void accelerate(float howFarToPushThePedal);
};
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
    juce::ToggleButton toggleButton;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

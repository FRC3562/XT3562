// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// Only allow file to be called once!
#pragma once

// Include Units Mathmatical Functions
#include <units/voltage.h>
#include <units/math.h>

// Include string capabilities
#include <string.h>

// Include boolean capabilities
#include <stdbool.h>



// System XBOX 360/One Controller Values
namespace ConstXbc {

    // Axis Controlled Inputs
    constexpr int LEFT_JOYSTICK_X = 0;    
    constexpr int LEFT_JOYSTICK_Y = 1;
    constexpr int LEFT_TRIGGER_ID = 2;
    constexpr int RIGHT_TRIGGER_ID = 3;
    constexpr int RIGHT_JOYSTICK_X = 4;    
    constexpr int RIGHT_JOYSTICK_Y = 5;

    // Button Controlled Inputs
    constexpr int A = 1;
    constexpr int B = 2;
    constexpr int X = 3;
    constexpr int Y = 4;
    constexpr int LEFT_BUMPER = 5;
    constexpr int RIGHT_BUMPER = 6;
    constexpr int SELECT = 7;
    constexpr int START = 8;
    constexpr int LEFT_JOYSTICK = 9;
    constexpr int RIGHT_JOYSTICK = 10;

    // CREATE A WIDGEt FOR THESE TO CHANGE

    //Dead zone
    constexpr double DEAD_ZONE = 0.5; //approximate value

    //Driver controller Port
    constexpr int DRIVER_CONTROLLER_PORT = 0;
}

// System Drivetrain (Tank Drive) Motors 
namespace ConstDtm {

}

// System Front Arm 
namespace ConstFa {

    // Set Arm Motor Speed
    constexpr int STOP = 0;
    constexpr float ARM_SPEED_FWD = 0.6;
    constexpr float ARM_SPEED_REV = -0.6;
    
}
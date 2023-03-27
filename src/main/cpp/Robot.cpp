// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
// Additional Copyrights (c)2023 Live Wire 3562 and RL Technologies LLC Code Teams

// Include Main Robot File
#include "Robot.h"

// Include Core Functions
#include <fmt/core.h>

#include <frc2/command/button/JoystickButton.h>
#include <frc2/command/button/Button.h>
#include <frc/Joystick.h>

// Include Remote Dashboard Type
//#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
  // Set up motor following for left and right sides 
  // of the tank drive system
  m_leftFollowMotor.Follow(m_leftLeadMotor);
  m_rightFollowMotor.Follow(m_rightLeadMotor);

  // Invert right side motors 
  m_rightLeadMotor.SetInverted(true);
  m_rightFollowMotor.SetInverted(true);
   
 // m_chooser.SetDefaultOption(kAutoNameDefault, kAutoNameDefault);
  //m_chooser.AddOption(kAutoNameCustom, kAutoNameCustom);
  //frc::SmartDashboard::PutData("Auto Modes", &m_chooser);
}

/**
 * This function is called every 20 ms, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable chooser
 * code works with the Java SmartDashboard. If you prefer the LabVIEW Dashboard,
 * remove all of the chooser code and uncomment the GetString line to get the
 * auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional comparisons to the
 * if-else structure below with additional strings. If using the SendableChooser
 * make sure to add them to the chooser code above as well.
 */
void Robot::AutonomousInit() {
  //m_autoSelected = m_chooser.GetSelected();
  // m_autoSelected = SmartDashboard::GetString("Auto Selector",
  //     kAutoNameDefault);
  //fmt::print("Auto selected: {}\n", m_autoSelected);

  //if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  //} else {
    // Default Auto goes here
  //}
}

void Robot::AutonomousPeriodic() {

  //if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  //} else {
    // Default Auto goes here
  //}

  /**
   * Main autonomous command for self drive
  */
  m_robotDrive.TankDrive(0.2, 0.2);

  m_arm.Set(0.6);
}

void Robot::TeleopInit() {
  // ?

}

void Robot::TeleopPeriodic() {
  /** 
   * Drive with tank style using XBOX 360/One wired controller.
   * Left stick controls left wheels - Right stick control right wheels
   */
  m_robotDrive.TankDrive(-xBoxControl.GetLeftY(),
                         -xBoxControl.GetRightY());
  
  /** Control Arm with XBOX */
  //frc2::Button([this] { return xBoxControl.GetRawButton(ConstXbc::LEFT_BUMPER); }).WhenPressed(m_arm(0.3));
}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

void Robot::SimulationInit() {}

void Robot::SimulationPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif

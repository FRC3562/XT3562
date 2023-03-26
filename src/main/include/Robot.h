// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// Only allow file to be called once!
#pragma once

// Include System Constants
#include <Constants.h>

// Include string capabilities
#include <string.h>

// Include boolean capabilities
#include <stdbool.h>

// Set type of robot (timed or command)
#include <frc/TimedRobot.h>

// Add XBOX 360/One Controller and HID Joystick
#include <frc2/command/button/CommandXboxController.h>

#include <frc/XboxController.h>
#include <frc/GenericHID.h>

//#include <frc2/command/button/JoystickButton.h>

// Add Differential Drive
#include <frc/drive/DifferentialDrive.h>

// Add Rev SparkMAX Motor Controller CAN/PWM
#include "rev/CANSparkMax.h"
#include <frc/motorcontrol/PWMSparkMax.h>

// Add Camera Support - MS3000 WebCam

// Add Gyro and Data Control Board

// Add Shuffleboard and Plugins
#include <frc/smartdashboard/smartdashboard.h>
#include <frc/smartdashboard/SendableChooser.h>

class Robot : public frc::TimedRobot {

  // Add XBOX 360/One Controller For Robot Drive & Functions
  frc::XboxController xBoxControl{0};
  
  
  
  //frc::GenericHID::Button armUp(frc::XboxController::Button::kX);
  //static const button armUp = JoystickButton(m_driverController, 3);

  // Assign SparkMax ID's to Motor Positions
  // Spark CAN
  static const int leftLeadDeviceID = 2, leftFollowDeviceID = 4, rightLeadDeviceID = 1, rightFollowDeviceID = 3;

  // Spark PWM
  static const int armPwmChannel = 0;

  // Setup motor types over the CAN for all motors.
  // Left Side Motors...
  rev::CANSparkMax m_leftLeadMotor{leftLeadDeviceID, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax m_leftFollowMotor{leftFollowDeviceID, rev::CANSparkMax::MotorType::kBrushless};

  // Right Side Motors...
  rev::CANSparkMax m_rightLeadMotor{rightLeadDeviceID, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax m_rightFollowMotor{rightFollowDeviceID, rev::CANSparkMax::MotorType::kBrushless};

  // Set primary motors for Differential Drive (other motors will follow lead motors)
  frc::DifferentialDrive m_robotDrive{m_leftLeadMotor, m_rightLeadMotor};

  // Set Motor for Front Arm Control
  frc::PWMSparkMax m_arm{armPwmChannel};

 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;

//private:
  //frc::SendableChooser<std::string> m_chooser;
  //const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "MENACE";
  //std::string m_autoSelected;
};

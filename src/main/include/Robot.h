// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// Only allow file to be called once!
#pragma once

// Include string capabilities
#include <string.h>

// Include boolean capabilities
#include <stdbool.h>

// Set type of robot (timed or command)
#include <frc/TimedRobot.h>

// Add XBOX 360/One Controller 
#include <frc/XboxController.h>

// Add Differential Drive
#include <frc/drive/DifferentialDrive.h>

// Add Rev SparkMAX Motor Controller
#include "rev/CANSparkMax.h"


// #include <frc/smartdashboard/SendableChooser.h>

class Robot : public frc::TimedRobot {
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
 // const std::string kAutoNameCustom = "XT3562";
  //std::string m_autoSelected;
};

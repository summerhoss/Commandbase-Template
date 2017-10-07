#include "DriveTrain.h"
#include "RobotMap.h"
#include <WPIlib.h>
#include "../Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"), leftMotor(new Talon(PORT)), rightMotor(new Talon(PORT2))
{

}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new TankDrive());

	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void DriveTrain::tankDrive(double moveLeft, double moveRight)
{
	leftMotor->Set(moveLeft);
	rightMotor->Set(moveRight);
}

void DriveTrain::setSpeedLeft(double speed)
{
	leftMotor->SetSpeed(speed*mult);
	rightMotor->SetSpeed(speed*mult);
}

DriveTrain::~DriveTrain()
{
	delete leftMotor;
	delete rightMotor;
}

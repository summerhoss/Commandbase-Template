#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <Talon.h>
#include "RobotMap.h"

class DriveTrain : public Subsystem {
private:
	Talon* leftMotor;
	Talon* rightMotor;
	int mult = 1;
public:
	DriveTrain();
	~DriveTrain();
	void InitDefaultCommand();
	void tankDrive(double moveLeft, double moveRight);
	void setSpeedLeft(double speed);
	void setSpeedRight(double speed);
};

//order is Subsystem->CommandBase->commands->OI->robot.cpp

#endif  // DriveTrain_H

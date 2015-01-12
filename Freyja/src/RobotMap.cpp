// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::chassisleftFrontMotor = NULL;
CANJaguar* RobotMap::chassisleftMiddleMotor = NULL;
CANJaguar* RobotMap::chassisleftRearMotor = NULL;
CANJaguar* RobotMap::chassisrightFrontMotor = NULL;
CANJaguar* RobotMap::chassisrightMiddleMotor = NULL;
CANJaguar* RobotMap::chassisrightRearMotor = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
TripleMotor* RobotMap::chassisLeftDrive = NULL;
TripleMotor* RobotMap::chassisRightDrive = NULL;
RobotDrive* RobotMap::chassisRobotDrive = NULL;

void RobotMap::init() {

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	chassisleftFrontMotor = new CANJaguar(5);
	
	
	chassisleftMiddleMotor = new CANJaguar(6);
	
	
	chassisleftRearMotor = new CANJaguar(7);
	
	
	chassisrightFrontMotor = new CANJaguar(2);
	
	
	chassisrightMiddleMotor = new CANJaguar(3);
	
	
	chassisrightRearMotor = new CANJaguar(4);
	


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	chassisleftFrontMotor->SetPercentMode();
	chassisleftFrontMotor->EnableControl();
	chassisleftFrontMotor->Set(0.0f);

	chassisleftMiddleMotor->SetPercentMode();
	chassisleftMiddleMotor->EnableControl();
	chassisleftMiddleMotor->Set(0.0f);

	chassisleftRearMotor->SetPercentMode();
	chassisleftRearMotor->EnableControl();
	chassisleftRearMotor->Set(0.0f);
	//......................................................
	chassisleftFrontMotor->SetPercentMode();
	chassisleftFrontMotor->EnableControl();
	chassisleftFrontMotor->Set(0.0f);

	chassisleftFrontMotor->SetPercentMode();
	chassisleftFrontMotor->EnableControl();
	chassisleftFrontMotor->Set(0.0f);

	chassisleftFrontMotor->SetPercentMode();
	chassisleftFrontMotor->EnableControl();
	chassisleftFrontMotor->Set(0.0f);

	chassisRightDrive = new TripleMotor(chassisrightFrontMotor,
				chassisrightMiddleMotor,chassisrightRearMotor);
	chassisLeftDrive = new TripleMotor(chassisleftFrontMotor,
			chassisleftMiddleMotor,chassisleftRearMotor);
	chassisRobotDrive = new RobotDrive(chassisLeftDrive, chassisRightDrive);

}

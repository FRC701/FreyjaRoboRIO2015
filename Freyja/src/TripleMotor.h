#ifndef TRIPLE_MOTOR_H_
#define TRIPLE_MOTOR_H_

#include "SpeedController.h"
class TripleMotor: public SpeedController
{
public:
	TripleMotor(SpeedController* speedController1,
				SpeedController* speedController2,
                                SpeedController* speedController3);
	
	SpeedController* GetSpeedController1();	
	SpeedController* GetSpeedController2();
        SpeedController* GetSpeedController3();	
	virtual void Set(float speed, uint8_t syncGroup=0);
	virtual float Get();
	
	virtual void Disable();
	
	virtual void PIDWrite(float output);
protected:
	SpeedController* mSpeedController1;
	SpeedController* mSpeedController2;
        SpeedController* mSpeedController3;
};

#endif

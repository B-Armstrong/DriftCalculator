#pragma once
#include "clscoordinates.h"
#using <mscorlib.dll>

using namespace System;

__gc class clsLatitude :
	public clsCoordinates
{
public:
	clsLatitude(void);
	~clsLatitude(void);
	void setLatitude(double  degrees, double  minutes);
	double getLatitude();
	
private:
	double latitude;
	static const int DENOMINATOR = 60;
	int intAddDegrees;
	int intRemainder;
	String* strMinutes;
};

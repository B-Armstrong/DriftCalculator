#include "clsLatitude.h"
#include "stdafx.h"




clsLatitude::clsLatitude(void)  
{
}

clsLatitude::~clsLatitude(void)
{
}
void clsLatitude::setLatitude(double  degrees, double  minutes)
{
	// must get minutes below 60 due to fact there are only 60 minutes
	// in  a degree.  Find remainder to calculate minutes
	
	intAddDegrees = (Convert::ToInt32(minutes) / DENOMINATOR );
	intRemainder = (Convert::ToInt32(minutes) % DENOMINATOR);
	degrees = ((degrees) + intAddDegrees);
	minutes = (Convert::ToDouble(intRemainder) / Convert::ToDouble(DENOMINATOR));
	strMinutes = minutes.ToString(".############");
	latitude = Convert::ToDouble(String::Concat(Convert::ToString(degrees), strMinutes));
		
}

double clsLatitude::getLatitude()
{
	return latitude;
}


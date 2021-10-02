#include "clsLongitude.h"
#include "stdafx.h"

clsLongitude::clsLongitude(void) : cosine(0.0)
{
}

clsLongitude::~clsLongitude(void)
{
}
void clsLongitude::setCosine(double lat)
{	
	//to get distance moved by longitude part of equation is to get the 
	//cosine of latitude. Math Cosine function returns radians, latitude
	//is in degrees that is why I have to multiply the latitude by the
	//degree 2 radians conversion number.
	
	cosine = Math::Cos(lat * CDEG2RAD);
	

}
double clsLongitude::getCosine()
{
	return cosine;
}

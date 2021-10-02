#pragma once
#include "clsCoordinates.h"
#using <mscorlib.dll>

using namespace System;

__gc class clsLongitude :
	public clsCoordinates
{
public:
	clsLongitude(void);
	~clsLongitude(void);
	void setCosine(double lat);
	double getCosine();
	
protected:
	double cosine;
	static const double CDEG2RAD = 1.74532925199433E-02;
};

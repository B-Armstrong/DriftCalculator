#include "clsCoordinates.h"
#include "frmDrift.h"
#include "stdafx.h"



clsCoordinates::clsCoordinates(void) 
{	
}

clsCoordinates::~clsCoordinates(void)
{
}
double clsCoordinates::coordinateDifference(double startCoordinate , double finishCoordinate)
{
	//just a simple subtraction to get difference of the start seconds and finish seconds
	//latitude or longitude
	
	diff = (finishCoordinate) - (startCoordinate);
	return diff;
}

double clsCoordinates::coordinateDistanceMoved(double difference, bool metric)
{
	dblLatMoved = difference * DEG2METERS;
	if (metric == false)
		dblLatMoved = dblLatMoved * METERS2FT;
	
	return dblLatMoved;
}
double clsCoordinates::coordinateDistanceMoved(double difference,double cosine, bool metric)
{
	dblLonMoved = (difference * cosine) * DEG2METERS;
		if (metric == false)
			dblLonMoved = dblLonMoved * METERS2FT;
    
	return dblLonMoved;
}
double clsCoordinates::coordinateTotalMoved(double latMoved, double lonMoved)
{
	totalMoved = Math::Sqrt(Math::Pow(latMoved, 2)+(Math::Pow(lonMoved,2)));
    return totalMoved;
}

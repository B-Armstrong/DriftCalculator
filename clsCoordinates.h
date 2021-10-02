#pragma once
#using <mscorlib.dll>

using namespace System;

__gc __abstract class clsCoordinates
{
public:
	clsCoordinates(void);
	double coordinateDifference(double startCoordinate,double finishCoordinate);
	~clsCoordinates(void);
	double coordinateDistanceMoved(double difference, bool metric);
	double coordinateDistanceMoved(double difference, double cosine, bool metric);
	double coordinateTotalMoved(double latMoved, double lonMoved);
	

private:
	static const double DEG2METERS = 1855.324265;	
	static const double METERS2FT = 3.280833;
	double dblLatMoved;
	double diff;
	double dblLonMoved;
	double totalMoved;
	
	
};

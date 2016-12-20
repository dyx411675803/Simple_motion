#include "Axis.h"

Axis::Axis(){
	this->Position = 0;
	this->Velocity = 0;
}

Axis::Axis(double P, double V){
	this->Position = P;
	this->Velocity = V;
}

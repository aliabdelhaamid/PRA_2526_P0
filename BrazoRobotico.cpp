#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
	isSujetando = false;
}
BrazoRobotico::getX(){
	return x;
}
BrazoRobotico::getY(){
	return y;
}
BrazoRobotico::getZ(){
	return z;
}

BrazoRobotico::getIsSujetando(){
	return isSujetando;
}

BrazoRobotico::coger(){
	isSujetando = true;
}

BrazoRobotico::soltar(){
	isSujetando = false;
}

BrazoRobotico::mover(double x, double y, double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
}


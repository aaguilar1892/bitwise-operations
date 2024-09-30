#include "major1.h"
/*
	Author: Nelli Salinas
	EUID: 	nrs0173
	Course: 3600.004
	Description: This function rotates a given integer x places to the right, where x is chosen by the user.
	First the integer is shifted to the right x places, leaving x bits as zero on the left side of the number and 
	the result is stored in shiftOne.To fix that, the integer is then shifted (32-x) places to the left to fill in those zeros from the previous step. 
	Finally to combine both of the steps they are combined using the bitwise OR operation and the result is stored
	in the result variable which is then returned to the main function.
	*/

unsigned int RotateInt(unsigned int userInt, unsigned int numPos){
	unsigned int shiftOne, shiftTwo, result;
	shiftOne = userInt >> numPos;// Shifts integer to the right numPos places
	shiftTwo = userInt << (32 - numPos);//Shifts the bits on the rightside to the left
	result = shiftOne | shiftTwo;// Combines both shiftOne and shiftTwo using the bitwise OR operation
	return result;
}

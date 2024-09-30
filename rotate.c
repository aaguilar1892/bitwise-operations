#include "major1.h"

unsigned int RotateInt(unsigned int userInt, int numPos){
	unsigned int shiftOne, shiftTwo, result;
	shiftOne = userInt >> numPos;
	shiftTwo = userInt << (31 - numPos);
	result = shiftOne | shiftTwo;
	printf("%d", result);
	return result;
}

#include "huge.h"

istream &operator +(istream &in, HugeInt &num){
	in >> num.bigNumber;
	return in;
}

int HugeInt::operator -(HugeInt &num1, HugeInt &num2){
	return num1.bigNumber + num2.bigNumber;
}

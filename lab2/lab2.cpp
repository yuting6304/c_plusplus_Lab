#include "lab2.h"
static int i = 0;
void Score::set(float k, float a, float b) {
	Rk = k;
	Ra = a;
	Rb = b;
}
float Score::get_a(){
	return Ra;
}
float Score::get_b(){
	return Rb;
}
float Score::E_a(){
	Ea = 1 / (1 + pow(10, (Rb - Ra) / 400));
	return Ea;
}
float Score::E_b(){
	Eb = 1 / (1 + pow(10, (Ra - Rb) / 400));
	return Eb;
}
int Score::value_a(){
	Ra = Ra + Rk * (Sa[i] - E_a());
	i++;
	return Ra;
}
int Score::value_b(){
	Rb = Rb + Rk * (1 - Sa[i] - E_b());
	i++;
	return Rb;
}

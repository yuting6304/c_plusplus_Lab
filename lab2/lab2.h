#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
class Score{
public:
	float Sa[6];
	float Ea;
	float Eb;
	void start();
	void set(float k, float a, float b);
	float get_a();
	float get_b();
	float E_a();
	float E_b();
	int value_a();
	int value_b();
	float Rk;
	float Ra;
	float Rb;
};

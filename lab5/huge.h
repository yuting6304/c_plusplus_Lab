#include <iostream>
#include <string>
using namespace std;

class HugeInt{
	public : 
		HugeInt(string x) : bigNumber(x){}
		friend istream &operator +(istream &, HugeInt &);
		int	operator -(HugeInt &, HugeInt &);
	private :
		string bigNumber;
};

#include <fstream>
#include "lab2.h"
int main()
{
	string name, headline;
	ifstream inFile("file.in", ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}

	Score s1;
	ofstream outFile("file.out", ios::out);
	if(!outFile){
		cerr << "Unable to open file!" << endl;
		exit(1);
	}
	while(cin >> s1.Rk >> s1.Ra >> s1.Rb >> s1.Sa[0] >> s1.Sa[1] >> s1.Sa[2] >> s1.Sa[3] >> s1.Sa[4] >> s1.Sa[5]){
		outFile << (int)s1.Ra << "\t" << (int)s1.Rb << "\n" << s1.value_a() << "\t" << s1.value_b() << "\n" << s1.value_a() << "\t" << s1.value_b() << "\n" << s1.value_a() << "\t" << s1.value_b() << "\n" << s1.value_a() << "\t" << s1.value_b() << "\n" << s1.value_a() << "\t" << s1.value_b() << "\n" << s1.value_a() << "\t" << s1.value_b() << endl;
		cout << "?";
	}
	cout << endl;
	return 0;
}

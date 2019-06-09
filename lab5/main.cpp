#include "huge.h"

int main()
{
	HugeInt x;
	HugeInt y(2);
	HugeInt z(3);
	HugeInt result;

	cin >> x;
	result = x + y;
	cout << x << "+" << y << "=" << result << endl;

	result = z - x;
	cout << result << endl;

	return 0;
}

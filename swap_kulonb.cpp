#include "std_lib_facilities.h"

int main()
{

	int a = 4;
	int b = 1;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << " " << b << "\n";

	return 0;
}

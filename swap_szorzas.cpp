#include "std_lib_facilities.h"

int main()
{

	int a = 72;
	int b = 13;

	a = a*b;	
	b = a/b;		
	a = a/b;

	cout << a << " " << b << "\n";

	return 0;
}

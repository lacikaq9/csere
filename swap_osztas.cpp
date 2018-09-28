#include "std_lib_facilities.h"

int main()
{

	int a = 5;
	int b = 9;

	a = a^b; 		
	b = b^a;  
	a = a^b;

	cout << a << " " << b << "\n";

	return 0;
}

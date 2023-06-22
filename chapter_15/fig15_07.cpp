// fig. 15.7: fig15_07.cpp
// References must be initialized.
#include <iostream>
using namespace std;

int main()
{
	int x = 3;
	int &y; // Error: y must be initialized
	
	cout << "x = " << x << endl << "y = " << y << endl;
	y = 7;
	cout << "x = " << x << endl << "y = " << y << endl;
} // end main

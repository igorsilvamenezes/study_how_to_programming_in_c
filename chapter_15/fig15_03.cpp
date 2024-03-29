// Fig. 15.3: fig15_03.cpp
// Using an inline function to calculate the volume of a cube.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Definition of inline function cube. Definition of function appears
// before function is called, so a function prototype is not required.
// First line of function definition acts as the prototype.
inline double cube( const double side )
{
	return side * side * side; // calculate the cube of side
} // end function cube

int main()
{
	double sideValue; // stores values entered by user
	
	for( int i = 1; i <= 3; i++ )
	{
		cout << "\nEnter the side length of your cube: ";
		cin >> sideValue; // read value from user
		
		// calculete cube of sideValue and display result
		cout << "Volume of cube with side "
			<< sideValue << " is " << cube( sideValue ) << endl;
	}
} // end main

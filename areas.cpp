// Lab 4 areas.cpp 
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM. 
// Celestino Martinez
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{  
   // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
	const double pi = 3.14159;
     
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE. 
	int choice,
		length,
		height,
		base,
		radius,
		pause;

	double area;

   
   // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.

	cout << "1 --square\n2 --circle\n3 --right triangle\n4 --quit ";

   
   // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.

	cin >> choice;
   
   // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION 
   // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
   // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
   // BE DISPLAYED.
	if (choice == 1) {
		cout << "Length of square: ";
		cin >> length;
		area = pow(length, 2);
		cout << "Area is " << area;
	}
	else if (choice == 2) {
		cout << "Radius of circle: ";
		cin >> radius;
		area = pi * pow(radius, 2);
		cout << "Area is " << area;
	}
	else if (choice == 3) {
		cout << "Height and base of triangle: ";
		cin >> height >> base;
		area = static_cast<double>(height) * base / 2;
		cout << "Area is " << area;
	}
	else if (choice >= 5 || choice <= 0)
		cout << "Invalid value";
	else
		cout << "Goodbye";

	cout << "\nPause";
	cin >> pause;
      
   return 0;
}

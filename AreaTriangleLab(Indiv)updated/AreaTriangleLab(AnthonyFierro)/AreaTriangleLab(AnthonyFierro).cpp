// overloading a function and getting the area of a triangle
// Group Area Lab
// Programmer : Anthony Fierro
// last modified : 11/13/17

#include <iostream>
using namespace std;

char getChoice();
void printBanner();
double getPosNum();
double calcArea(double);
double calcArea(double, double);
double calcArea(double, double, double);
void getTriangleSides(double &, double &, double &);

int main()
{
	double side1, side2, side3, area, radius, length, width;
	char choice;

	system("color 3a");
	system("title Area Function Lab (Anthony Fierro)");

	// banner 
	printBanner();

	cout << "Would you like to test the program? (Y)es or (N)o \n";
	choice = getChoice();
	while (choice == 'y' || choice == 'Y')
	{
		// Get triangle sides 
		getTriangleSides(side1, side2, side3);

		// calculate area
		area = calcArea(side1, side2, side3);

		// output sides and area
		cout
			<< "The area of the triangle with the sides " << side1 << ", " << side2
			<< ", and " << side3 << " is " << area;
		cout << "\t\n\n***********************************************\n\n";
		
		// Get radius of circle
		cout << "Give me the radius of a circle: ";
		cin >> radius; cin.ignore(100, '\n');

		//calc the area
		area = calcArea(radius);

		//output area
		cout << "The area of the circle with the radius " << radius << " is " << area << endl;

		cout << "\t\n\n***********************************************\n\n";

		// get length of a rectangle
		cout << "Give me the length of a rectangle:";
		cin >> length; cin.ignore(100, '\n');
		cout << "\n\tNow the width: ";
		cin >> width; cin.ignore(100, '\n');

		// calc area 
		area = calcArea(length, width);

		// output area with length and width
		cout
			<< "\nThe area of the rectangle with the length of " << length
			<< " and width of " << width << " is " << area << endl;

		cout
			<< "\t\n\n***********************************************\n\n"
			<< "Do you want to test the program again? "; // ask to retest program 
		choice = getChoice();
	}
	system("pause");

	return 0;
}



void printBanner()
{
	cout
		<< "\n"
		<< "                   Project on Overloading Functions              \n"
		<< "                      Find the area of a triangle                \n"
		<< "                           by Anthony Fierro                 \n\n\n";
}

char getChoice()
{
	char choice;
	cin >> choice; cin.ignore(100, '\n');
	while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
	{
		cout << "Please choose (Y)es or (N)o. ";
		cin >> choice; cin.ignore(100, '\n');
	}
	return choice;
}

void getTriangleSides(double &a, double &b, double &c)
{
	cout << "\n\nGive me the length of the sides of a triangle.\n";
	cout << "Side 1: ";
	a = getPosNum();
	cout << "Side 2: ";
	b = getPosNum();
	cout << "Side 3: ";
	c = getPosNum();

	while (a + b <= c || b + c <= a || a + c <= b)
	{
		cout
			<< "The sum of two sides has to be larger than the third side to make a triangle\n"
			<< "Please try again.\n"
			<< "Side 1: ";
		a = getPosNum();
		cout << "Side 2: ";
		b = getPosNum();
		cout << "Side 3: ";
		c = getPosNum();
	}


}

double getPosNum()
{
	double x;
	cin >> x; cin.ignore(100, '\n');

	while (x < 0)
	{
		cout << "Please enter a positive number: ";
		cin >> x; cin.ignore(100, '\n');
	}

	return x;
}

double calcArea(double x)
{
	return ((pow(x, 2)*3.14159265));
}

double calcArea(double x, double y)
{
	return x * y;
}

double calcArea(double a, double b, double c)
{
	double s = (a + b + c) / 2;

	return sqrt(s*(s - a)*(s - b)*(s - c));

}

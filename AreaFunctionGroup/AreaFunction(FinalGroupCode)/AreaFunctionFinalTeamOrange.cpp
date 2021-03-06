// Description  : program calculate are of triangle, circle, rectangle
// Title        : Area calculation
// Author       : Team Orange
// Last modified: 11/19/2017

#include <iostream>
#include <iomanip>
using namespace std;

bool choiceInput();
double getPositive();
void getTriangle(double &side1, double &side2, double &side3);
double calcArea(double radius);
double calcArea(double width, double length);
double calcArea(double side1, double side2, double side3);
bool isTriangle(double side1, double side2, double side3);
void printBanner();
void getRectangle(double &, double &);
void getCircle(double &);

int main()
{
	system("color 70");
	system("title Area Calculator(TeamOrange)");
	cout << showpoint << fixed << setprecision(6);

	printBanner();

	double radius, width, length, side1, side2, side3;

	while (choiceInput())
	{
		//circle
		getCircle(radius);
		cout << "\t   The area of the triangle is " << calcArea(radius) << endl;

		//rectangle
		getRectangle(length, width);
		cout << "\t   The area of the triangle is " << calcArea(width, length) << endl;

		//triangle
		getTriangle(side1, side2, side3);
		cout << "\t   The area of the triangle is " << calcArea(side1, side2, side3) << endl;

		cout << "\n\t\t  ******************\n";
	}

	cout << "\nDon't you love Geometry?\n";
	system("pause");
}

//--------------------------------------------------------------------
bool choiceInput()
{
	static int countChoice = 0;
	char choice;

	countChoice++;

	cout
		<< "\nDo you want to test the program"
		<< (countChoice > 1 ? " again" : "") << "? ";
	(cin >> ws).get(choice);	cin.ignore(100, '\n');

	while (choice != 'Y' && choice != 'N' && choice != 'y' && choice != 'n')
	{
		cout << "Please type Y or N. Try again: ";
		(cin >> ws).get(choice); cin.ignore(100, '\n');
	}

	return (choice == 'Y' || choice == 'y' ? true : false);

}
//--------------------------------------------------------------------
double getPositive()
{
	double number;

	cin >> number; cin.ignore(100, '\n');
	while (number <= 0)
	{
		cout << "Please enter positive number: ";
		cin >> number;
	}

	return number;
}
//--------------------------------------------------------------------
double calcArea(double radius)
{
	return radius * radius * 3.14159265;
}
//--------------------------------------------------------------------
double calcArea(double width, double length)
{
	return width * length;
}

double calcArea(double side1, double side2, double side3)
{
	double halfCircumference = (side1 + side2 + side3) / 2;
	return sqrt(halfCircumference * (halfCircumference - side1) * (halfCircumference - side2) * (halfCircumference - side3));
}
//--------------------------------------------------------------------
bool isTriangle(double side1, double side2, double side3)
{
	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
		return false;
	return true;
}
//--------------------------------------------------------------------
void getTriangle(double &side1, double &side2, double &side3)
{
	cout << "\nGive me the lengths of the sides of a triangle.\n";
	cout << "Side 1:";
	side1 = getPositive();
	cout << "Side 2:";
	side2 = getPositive();
	cout << "Side 3:";
	side3 = getPositive();
	while (!isTriangle(side1, side2, side3))
	{
		cout
			<< "The sum of two sides of a triangle must be greater than the third side.\n"
			<< "please try again.\n";
		cout << "Side 1: ";
		side1 = getPositive();
		cout << "Side 2: ";
		side2 = getPositive();
		cout << "Side 3: ";
		side3 = getPositive();
	}
}
//--------------------------------------------------------------------
void printBanner()
{
	cout
		<< "\n\t      Project on Designing Overloading Functions        "
		<< "\n\t  Find the area of a rectangle, triangle, or circle     "
		<< "\n\t        also does extensive input validation            "
		<< "\n\t         and uses by reference variables                "
		<< "\n\t                   Team Orange                        \n";
}

void getRectangle(double &length, double &width)
{
	cout << "\nGive me the length of a rectangle: ";
	length = getPositive();
	cout << "...and the width: ";
	width = getPositive();
}
void getCircle(double &radius)
{
	cout << "\nGive me the radius of a circle: ";
	radius = getPositive();
}
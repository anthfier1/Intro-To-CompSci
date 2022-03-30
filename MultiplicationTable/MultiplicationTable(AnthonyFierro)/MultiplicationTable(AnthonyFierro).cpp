// Multiplication Table : allow the user to print a Multiplication Table from numbers 1-12
// Multiplication Table
// Programmer: Anthony Fierro
// Last modified: Oct 15 2017

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// setup section 
	system("title Multiplication Table (Anthony Fierro)");
	system("color 3a");

	// declaration section 
	int number = 1, lastNumber, result ;
	char border = 178;
	const int
		WIDTH = 4,
		MIN = 1,
		MAX = 12;



	// banner
	cout
		<< "\t\t\t                 Print the multiplication table                                 \n"
		<< "\t\t\t                    to the user defined limit                                   \n"
		<< "\t\t\t                        by Anthony Fierro                                       \n";
	while (true)
	{


		cout << "Up to what number do you want to print the multiplication table? : ";
		cin >> lastNumber;

		while (lastNumber < MIN || lastNumber > MAX)
		{
			cout
				<< "Please enter a number 1- 12.\n "
				<< "Try Again: ";
			cin >> lastNumber;      cin.ignore(100, '\n');
		}

		cout << setw(WIDTH + 4) << " ";
		for (number = 1; number <= lastNumber; ++number) // first set of numbers (horizontal)
		{
			cout << setw(WIDTH) << number;
		}
		cout << endl;

		cout << setw(WIDTH + 4);
		for (int j = 1; j <= 1 + (WIDTH * lastNumber); ++j) // setting the border on the top
		{
			cout << border;
		}
		cout << endl;

		for (number = 1; number <= lastNumber; ++number) // First set of numbers(vertical)
		{
			cout << setw(WIDTH) << number << setw(WIDTH) << border;
		

			for (int i = 1; i <= lastNumber; ++i) // inside table
			{
				cout << setw(WIDTH) << right << number * i;
			}
			cout << endl;
		}
		cout << "\nDon't you love math! So lets do it again! \n\n";
		
	}
	
	system("pause");
	return 0;
}

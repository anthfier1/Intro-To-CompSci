// ForLoopLab : Allows the user print the whole ASCII table, lowercase letters uppercase letters and digits
// ForLoopLab
// Programmer: Anthony Fierro
// Last modified: Oct 15 2017

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

	// setup section 
	system("title For Loop Lab with Validation (Anthony Fierro)");
	system("color 3a");

	// declaration section 

	int choice, perLine, start, end;




	// banner
	cout
		<< "\t\t\t                 Print the whole ASCII table, the alphabet, or digits                       \n"
		<< "\t\t\t                                 n characters per line                                      \n"
		<< "\t\t\t                                   by Anthony Fierro                                        \n";
	while (true)
	{
		// menu	
		cout
			<< "\t Please enter your choice:                 \n"
			<< "\t\t 1] Print the whole ASCII table          \n"
			<< "\t\t 2] Print the capital letters            \n"
			<< "\t\t 3] Print the lowercase letters          \n"
			<< "\t\t 4] Print the digits                     \n"
			<< "\t\t 5] Quit                                 \n";
		// input
		cout << "Choice: ";
		cin >> choice;
		cout << endl;
		cin.ignore(80, '\n');


		switch (choice)
		{

		case 1:
			start = 0;
			end = 255;
			break;
		case 2:
			start = 65;
			end = 90;
			break;
		case 3:
			start = 97;
			end = 112;
			break;
		case 4:
			start = 49;
			end = 57;
			break;
		case 5:
			cout << "Press ENTER to end the program.";
			cin.get();
			return 0;
		default:
			cout << "Invalid choice.";
		}


		cout << "How many characters would you like to print per line?: ";		// must be between 1 and 4
		cin >> perLine;
		cin.ignore(80, '\n');
		cout << endl;

		for (int num = start; num <= end; num++) {

			cout << setw(4) << num << setw(6) << static_cast<char>(num) << ((num - start + 1) % perLine == 0 ? "\n" : "   ||");



		}
		cout << "\n\n";






		system("pause");
	}
	return 0;
}
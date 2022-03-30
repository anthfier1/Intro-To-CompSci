// If statement lab: Allow users age [21 - 40) to be allowed into a club. askes for thier name and age and determin if they qualify 
// If Satement Lab
// Programmer: Anthony Fierro
// Last updated: Sept 26, 2017

#include<iostream>
#include<string>
using namespace std;

int main()
{
	system("title Admission Lab (Anthony Fierro)");
	system("color 3a");
	double age;
	string name;
	const int
		MIN_AGE = 21,
		MAX_AGE = 40;

	cout
		<< "\t\t\t                          The \"Club Admission\" lab.                              \n"
		<< "\t\t\t             Only customers with the age [21,40) are allowed in.                   \n"
		<< "\t\t\t                              By Anthony Fierro                                \n\n    ";

	while (true)
	{
		cout << "\n\nWhat is your full name? ";
		cin >> ws;
		getline(cin, name);
		cout << "\nHow old are you " << name << "? ";
		cin >> age;
		if (age >= MIN_AGE && age < MAX_AGE)
		{
			cout << "\n\t\tWelcome to the club " << name << "!\n\n";
		}
		else 
		{
			cout
				<< "\t Sorry, you need to be between the age" << MIN_AGE << " (INclusive) and" << MAX_AGE <<" (EXclusive)           \n"
				<< "\t to be eligible to enter this establishment!                                           \n\n";

		}
		cout << "Next Customer Please!\n\n";
		system("pause");
	}





	return 0;
}
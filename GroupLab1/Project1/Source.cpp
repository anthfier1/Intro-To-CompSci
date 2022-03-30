// Switch case group lab : making an online music store
// Switch Case Group Lab 
// Programmer: Anthony Fierro
// Last updated: 10-8-17 
#include<cmath>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	system("title Online Music Store (Anthony Fierro)");
	system("color 3a");
	double const
		MONTHLY_COST_A = 4.99,
		MONTHLY_COST_B = 9.99,
		MONTHLY_COST_C = 14.99,
		SONG_COST_A = 0.99,
		SONG_COST_B = 0.59,
		SONG_COST_C = 0.29,
		TAX = .06;
	int const
		FREE_SONGS_A = 10,
		FREE_SONGS_B = 20,
		FREE_SONGS_C = 30;
	char package;

	double tax, eachSong, freeSong, bill, total, packageCost, extraFee, numberOfSongs;
	bool errorFlag = false;
	int songExceed;
	cout
		<< "\t\t\t                 Switch case group lab.                          \n"
		<< "\t\t\t                   Online Music Store                         \n"
		<< "\t\t\t          also needs nested if/else statements                     \n"
		<< "\t\t\t                 and conditonal operator                          \n"
		<< "\t\t\t                     by team Orange                         \n ";


	cout << fixed << setprecision(2) << showpoint;

	while (true)
	{

		cout
			<< "\n\t Here are the posible option packages offered in our store : \n"
			<< "\n\t Package A : Monthly fee: " << MONTHLY_COST_A << ". " << FREE_SONGS_A << " free songs, and $" << SONG_COST_A << " per song after that.\n"
			<< "\n\t Package B : Monthly fee: " << MONTHLY_COST_B << ". " << FREE_SONGS_B << " free songs, and $" << SONG_COST_B << " per song after that.\n"
			<< "\n\t Package C : Monthly fee: " << MONTHLY_COST_C << ". " << FREE_SONGS_C << " free songs, and $" << SONG_COST_C << " per song after that.\n";

		cout << "\n\t Please select the option package that you have. ";
		cin >> package;
		cin.ignore(100, '\n');
		switch (package) {
		case 'a':
		case 'A':
			packageCost = MONTHLY_COST_A;
			eachSong = SONG_COST_A;
			freeSong = FREE_SONGS_A;
			break;
		case 'b':
		case 'B':
			packageCost = MONTHLY_COST_B;
			eachSong = SONG_COST_B;
			freeSong = FREE_SONGS_B;
			break;
		case 'c':
		case 'C':
			packageCost = MONTHLY_COST_C;
			eachSong = SONG_COST_C;
			freeSong = FREE_SONGS_C;
			break;
		default: cout << "\n\t	 *** Sorry we do not have this option.\n" << endl;
			continue;

			system("pause");

		}

		cout << "How many songs did you download this month?: ";
		cin >> numberOfSongs;
		cin.ignore(100, '\n');



		if (numberOfSongs < 0)
		{
			cout << " YOU CANNOT HAVE A NEGATIVE NUMBER OF SONGS! \n ";
			errorFlag = true;
		}
		if (static_cast <int> (numberOfSongs) < numberOfSongs)
		{
			cout << "Your number has to be a whole number.\n";
			errorFlag = true;
		}
		if (!errorFlag)
		{
			songExceed = (numberOfSongs - freeSong);
			if (songExceed < 0)
				songExceed = 0;
			
			extraFee = (eachSong * songExceed);
			bill = packageCost + extraFee;
			tax = bill * TAX;
			total = bill + tax;

			
			cout << "Your bill for this month is " << total << ". " << packageCost << " + " << extraFee << " + " << tax << " (for tax)";
		}

 		system("pause");

	}

	return 0;
}
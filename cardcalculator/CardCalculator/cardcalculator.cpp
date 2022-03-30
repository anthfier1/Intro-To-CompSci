

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void loadArray(int a[], int size, int limit, ostream &output = cout);
void calcPrecent(int a[], int size, int games);
void printArray(int a[], int size, int perLine = 5, ostream &output = cout);
double countRepeats(int value_array[], int array_size, int value);

int main()
{
	cout << fixed << right << setw(5) << setprecision(2);
	const int
		SIZE = 13,
		LIMIT = 7;

	int cards[SIZE], games = 500;
	srand(time(0));
	while (true)
	{

		cout
			<< "\t\t  Enter the cards power.          \n"
			<< "\t\t  [Physical size of the array is " << SIZE << "]             \n";
		// load array
		loadArray(cards, SIZE, LIMIT);
		cout << "\t\n\nDone loading scores\n";

		printArray(cards, SIZE);
		system("pause");
		cout << "calculating the precent of the cards or 500 games: ";
		calcPrecent(cards, LIMIT, games);
	}
	system("pause");
	return 0;
}
void loadArray(int a[], int size, int limit, ostream &output)
{
	for (int fill = 0; fill < size; fill++)
	{
		a[fill] = (1 + (rand() % 7));
	}
}

void printArray(int a[], int size, int perLine, ostream & output)
{
	for (int count = 0; count < size; count++)
		cout << a[count] << setw(4) << (((count + 1) % perLine == 0) ? "\n" : "") << setw(6);
}
void calcPrecent(int a[], int size, int games)
{
	// calculate percentage
	for (int i = 1; i <= size; i++)
	{
		double percentage;
		double c = countRepeats(a, games, i);
		cout << "power " << i << " repeated " << c << " times in 500 games" << endl;
		percentage = static_cast<double>(c) / static_cast<double>(games) * 100;
		cout << "Percentage = " << percentage << endl;
	}
}
double countRepeats(int value_array[], int games, int value)
{// finds out how many times value repeated in the array
	int count = 0;
	for (int i = 0; i < games; i++)
	{
		if (value_array[i] == value)
			count++;
	}
	return count;
}

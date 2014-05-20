#include <iostream>
#include <ctime>
using namespace std;

void ex02();

int main()
{
	srand(time(NULL));
	ex02();
}

void ex02()
{
	bool hasPassedTest = true;
	int x = rand(), y = rand();
	cout << x << " " << y << endl;
	if (x >= y)
		cout << "X is, in fact, greater than or equal to Y.\n";
	else
		cout << "Nah man, X ain't greater than or equal to Y.\n";

	int numberOfShares;
	cout << "Enter a value for 'numberOfShares': ";
	cin >> numberOfShares;
	cout << ((numberOfShares < 100) ? "It's under 100!\n" : "It's over/equal to 100!\n");
	
	int bx, bk;
	cout << "Now, enter a box width, and then a book width: ";
	cin >> bx;
	cin >> bk;
	if (bx % bk == 0)
		cout << "So, you can fit " << (bx / bk) << " books evenly along the box's width.\n";
	else
		cout << "You're going to have some space not big enough for a book left over.\n";

	int sl, temp;
	cout << "Now, enter the shelf life of a box of chocolate,\nand then enter the current temperature outside: ";
	cin >> sl;
	cin >> temp;
	if (temp > 90)
		cout << "The new shelf live is now " << sl - 4 << ".\n";
	else
		cout << "The shelf life is still " << sl << ".\n";
}
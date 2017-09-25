// Homework1Part3.cpp 
//Michael Bullinger
// September 24, 2017
#include <iostream>

#include "Homework1Part3.h"

using namespace std;

//Test program that tests every single function
int main()
{
	Collection<int>cool;
	cout << "Created collection cool" << endl;
	cool.print();
	cool.insert(5);
	cout << "Inserted 5 into collection cool" << endl;
	cool.insert(2);
	cout << "Inserted 2 into collection cool" << endl;
	cool.insert(4);
	cout << "Inserted 4 into collection cool" << endl;
	cool.print();
	cout << "Is 5 contained in collection cool " << boolalpha << cool.notContainded(5) << endl;
	cool.remove(5);
	cout << "Removed 5 from collection cool " << endl;
	cout << "Is 5 contained in collection cool " << boolalpha << cool.notContainded(5) << endl;
	cool.insert(1);
	cool.insert(2);
	cool.insert(5);
	cout << "filled collection cool" << endl;
	cool.print();
	cool.removeRandom();
	cout << "Removed a random number from collection cool" << endl;
	cool.print();
	cool.makeEmpty();
	cout << "Emptied collection cool" << endl;
	cool.print();
	return 0;
}

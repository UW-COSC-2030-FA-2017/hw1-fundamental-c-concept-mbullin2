// Homework0Concept.cpp 
// Michael Bullinger
// Recursion Concept


#include <iostream>
using namespace std;

void getNumber(int number) 
{
	
	cout << "The new number is " << number<< endl;
	number++;
	if (number <= 12)
	{
		getNumber(number);
	}
}

int main() {
	int number = 0;
	getNumber(number);
	
	return 0;
}

//Homework1Part3.h
//Michael Bullinger
//September 24, 2017
#ifndef COLLECTION_H

#define COLLECTION_H

#include<iostream>

using namespace std;

//Class Set Up
template <typename object>
class Collection
{
public:
	Collection()
	{
		size = 5;
		randomArray = new object[size];
		for (int i = 0; i < size; i++)
		{
			randomArray[i] = 0;
		}
	}

		void makeEmpty();

		void insert(object number);

		void remove(object number);

		void removeRandom();

		bool notContainded(object number);
		
		void print();


	private:
		int size;
		object* randomArray;
};

//Funtion to insert an object into the collection array
template<typename object>
void Collection<object>::insert(object number)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		if (randomArray[i] != 0)
		{
			temp++;
		}
	}
   randomArray[temp] = number;

	
}

//Function to completely empty the array
	template <typename object>
	void Collection<object>::makeEmpty()
	{
		for (int i = 0; i < size; i++)
		{
			randomArray[i] = 0;
		}
	}

//Function that removes an object from the collections array
	template <typename object>
	void Collection<object>::remove(object number)
	{
		for (int i = 0; i < size; i++)
		{
			if (randomArray[i] == number)
			{
				for (int y = i; y < size - 1; y++)
				{
					randomArray[y] = randomArray[y + 1];
				}
				randomArray[size - 1] = 0;
			}
		}
	}

	template <typename object>

//Function to check weather or not an object is contained with in the array
	bool Collection<object>::notContainded(object number)
	{
		int temp = number;
		for (int i = 0; i < size; i++)
		{
			if(randomArray[i] == temp)
			{
				return false;
			}
		}
		return true;
	}

//A print function that just prints out the collections array for test purposes
	template<typename object>
	inline void Collection<object>::print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << "[ " << randomArray[i] << " ] ";
		}
		cout << endl;
	}

//A function that removes a random object from the collections array
	template <typename object>
	void Collection<object>::removeRandom()
	{
		int randomNumber = rand() % size + 1;
		for (int i = 0; i < size; i++)
		{
			if (randomArray[i] == randomNumber)
			{
				for (int y = i; y < size - 1; y++)
				{
					randomArray[y] = randomArray[y + 1];
				}
				randomArray[size - 1] = 0;
			}
		}
}
#endif

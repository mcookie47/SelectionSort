#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int i;		//selected index of the element that is being sorted
	int j;		//index of the element that is being compared with
	int temp;	//this acts as a temporary place holder for an element
	int x;		//place holder for the index
	int min;	//selected element

	// put elements in the array using random number generator
	int array[5];
	srand(time(0));
	cout << "Unsorted elements: ";
	for (int e = 0; e < 5; e++)
	{
		array[e] = (rand() % 100) + 1;
		cout << array[e] << "\t";
	}
	cout << endl;

	for (i = 0; i < 5; i++)
	{
		min = array[i];
		x = i;
		for (j = i + 1; j < 5; j++)
		{
			if (array[i] > array[j])
			{
				min = array[j];
				x = j;
			}
		}
		temp = array[i];
		array[i] = array[x];
		array[x] = temp;
	}

	cout << "Sorted Elements: ";
	for (i = 0; i < 5; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
	system ("pause");
	return 0;
}
#include <iostream>
using namespace std;


void countSort(int Given_array[], int size)
{
	int Final_Sorted[50];
	int count[10];
	int k = Given_array[0];
	for (int i = 1; i < size; i++)
	{
		if (Given_array[i] > k)
			k = Given_array[i];
	}
	for (int i = 0; i <= k; i++)
	{
		count[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		++count[Given_array[i]];
	}
	for (int i = 1; i <= k; i++)
	{
		count[i] += count[i - 1];
	}
	for (int i = size - 1; i >= 0; i--)
	{
		Final_Sorted[--count[Given_array[i]]] = Given_array[i];
	}
	for (int i = 0; i < size; i++)
	{
		Given_array[i] = Final_Sorted[i];
	}
}

void printArray(int Given_array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << Given_array[i] << " ";
	cout << endl;
}
int main()
{
	int Given_array[] = { 8,5,2,1,3,5,4,2,3 };
	int size = sizeof(Given_array) / sizeof(Given_array[0]);
	countSort(Given_array, size);
	printArray(Given_array, size);
	system("pause");
}


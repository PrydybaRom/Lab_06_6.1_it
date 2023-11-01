// Lab_06.1.it.cpp 

// Варіант 22

#include <iostream>
#include <cmath>
using namespace std;

void FullArr(int t[], const int size)
{
	int a = -5, b = 12;

	for (int i = 0; i < size; i++)
	{
		t[i] = a + rand() % (b - a + 1);
	}
}


void PrintArr(int t[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (t[i] >= 0 || t[i] % 2 == 0)
			cout << t[i] << endl;

	}
}


int main() {

	const int SIZE = 25;
	int a = -5, b = 12;
	int arr[SIZE]{};

	FullArr(arr, SIZE);

	cout << "PRINT" << endl;
	PrintArr(arr, SIZE);

}








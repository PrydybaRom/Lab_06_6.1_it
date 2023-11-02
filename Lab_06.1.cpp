// Lab_06.1.it.cpp 

// Варіант 22

#include <iostream>
#include <cmath>
using namespace std;

void FullArr(int t[], const int size);
void PrintArr(int t[], const int size);
int CountArr(int t[], const int size);
void SumArr(int t[], const int size);
void PrintChangeArr(int t[], const int size);




int main() {

	const int SIZE = 25;
	int a = -5, b = 12;
	int arr[SIZE]{};

	FullArr(arr, SIZE);

	PrintArr(arr, SIZE);

	SumArr(arr, SIZE);

	CountArr(arr, SIZE);

	PrintChangeArr(arr, SIZE);

	PrintArr(arr, SIZE);

}

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
	cout << " " << "Array - " << " ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << t[i] << " ";
	}
}

int CountArr(int t[], const int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum++;
	}
	cout << " " << "Lenght array - " << sum << endl;
	return sum;
}

void SumArr(int t[], const int size)
{
	int sumItem = 0;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		sumItem += t[i];
	}
	cout << " " << "Sum item array - " << sumItem << endl;
}

void PrintChangeArr(int t[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (t[i] >= 0 || t[i] % 2 == 0)
			t[i] = 0;
	}
}








#include <iostream>

using namespace std;

void CreateMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		*(arr + i) = rand() % 50;
}

void PrintMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << *(arr + i) << ' ';

	cout << endl;
}

void ReverseMassive(int* arr, int size, int* arr1)
{
	for (int i = 0; i < size; i++)
		*(arr1 + i) = *(arr + size - i - 1);
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	cout << "Введите длину массива: " << endl;
	int size{};
	cin >> size;

	int* arr = new int[size];
	int* arr1 = new int[size];

	cout << "Исходный массив: " << endl;
	CreateMassive(arr, size);
	PrintMassive(arr, size);

	cout << "Обратный массив: " << endl;
	ReverseMassive(arr, size, arr1);
	PrintMassive(arr1, size);

	delete[] arr;
	delete[] arr1;

	return 0;
}
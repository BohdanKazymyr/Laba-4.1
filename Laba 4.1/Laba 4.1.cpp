// Lab_4.1
// < Казимир Богдан >
// Лабораторна робота № 4.1
// Цикли.
// Варіант 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double P;
	cout << "N = "; cin >> N;
	P = 16;
	i = N;
	while (i <= 16)
	{
		P *= (N*i*1.0) / (1.0*i*i+N*N);
		i++;
	}
	cout << P << endl;
		P = 16;
	i = N;
	do {
        P *= (N * i * 1.0) / (1.0 * i * i + N * N);
		i++;
	} while (i <= 16);
	cout << P << endl;
	P = 16;
	for (i = N; i <= 16; i++)
	{
		P *= (N * i * 1.0) / (1.0 * i * i + N * N);
	}
	cout << P << endl;
	P = 16;
	for (i = N; i <= 16; i++)
	{
		P *= (N * i * 1.0) / (1.0 * i * i + N * N);
	}
	cout << P << endl;
	return 0;
}
#include <iostream>
#include <conio.h>

using namespace std;

int Fibonacci(int);

int main() 
{
	int Angka, Hasil;

	cout << "Masukkan Angka : "; cin >> Angka;
	Hasil = Fibonacci(Angka);

	cout << "Nilainya adalah : ";
	cout << Hasil << endl;
	
	_getch();
	return 0;
}

int Fibonacci(int N)
{
	cout << "Fungsi Fibonacci " << N << endl;
	
	if ((N == 0) || (N == 1))
	{
		return N;
	}
	else
	{
		return Fibonacci(N - 1) + Fibonacci(N - 2);
	}
}

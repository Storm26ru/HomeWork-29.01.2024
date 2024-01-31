#include<iostream>
using namespace std;
//#define BITWISE_OPERATORS
//#define ARRAY
//#define SHIFT_L
#define SHIFT_R


void main()
{
	setlocale(LC_ALL, "");
#ifdef BITWISE_OPERATORS
	int num1 = 0;
	int num2 = 0;
	cout << "Введите первое число: "; cin >> num1;
	cout << "Введите второе число: "; cin >> num2;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "Меняем местами значение переменных num1 и num2" << endl;
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
#endif // BITWISE_OPERATORS

#ifdef ARRAY
	const int SIZE = 10;
	int sum = 0;  //Сумма элементов массива
	int average = 0; //Среднее арифметическое элементов массива
	int min = 0; // Минимальное значение
	int max = 0; // Максимальное значение
	int Array[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива Array: "; cin >> Array[i];
	}
	min = Array[0];
	max = Array[0];
	cout << "\nВывод массива в прямом порядке:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (Array[i] < min)min = Array[i];
		if (Array[i] > max)max = Array[i];
		sum += Array[i];
		cout << Array[i] << "\t";
	}
	cout << "\nВывод массива в обратном порядке:" << endl;
	for (int i = 0; i < SIZE; i++) cout << Array[(SIZE - 1) - i] << "\t";
	cout << "\n Сумма элементов массива: " << sum;
	cout << "\n Средне-арифметическое элементов массива: " << (double(sum)) / SIZE;
	cout << "\n Максимальное значение в массиве: " << max;
	cout << "\n Минимальное значение в массиве: " << min << endl;
#endif // ARRAY

#ifdef SHIFT_L
	const int SIZE = 10;
	int Array[SIZE];
	int Array_shift[SIZE];
	int shift{ 0 };
	cout << "Массив из 10 чисел Фибоначчи:" << endl;
	for (int a, i = 0, n = 0, m = 1; i < SIZE; i++)//заполняем массив числами Фибоначчи и выводим его
	{
		if (i < 2)Array[i] = i;
		else
		{
			Array[i]= a = n + m;
			n = m;
			m = a;
		}
		cout << Array[i] << "\t";
	}

	cout << "Введите число от 0 до 10: "; cin >> shift;
	
	cout << "Массив сдвинут в лево на " << shift << " элементов." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (i + shift < SIZE) Array_shift[i] = Array[i + shift];
		else Array_shift[i] = Array[i - (SIZE - shift)];
		cout << Array_shift[i] << "\t";
	}
#endif // SHIFT_L

#ifdef SHIFT_R
	const int SIZE = 10;
	int Array[SIZE];
	int Array_shift[SIZE];
	int shift{ 0 };
	cout << "Массив из 10 чисел Фибоначчи:" << endl;
	for (int a, i = 0, n = 0, m = 1; i < SIZE; i++) //заполняем массив числами Фибоначчи и выводим его
	{
		if (i < 2)Array[i] = i;
		else
		{
			Array[i] = a = n + m;
			n = m;
			m = a;
		}
		cout << Array[i] << "\t";
	}
	cout << "\nВведите число от 0 до 10: "; cin >> shift;
	cout << "Массив циклически сдвинут в право на " << shift << " элементов." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (i + (SIZE - shift) < SIZE) Array_shift[i] = Array[i + (SIZE - shift)];
		else Array_shift[i] = Array[i - shift];
		cout << Array_shift[i] << "\t";
	}
#endif // SHIFT_R







}
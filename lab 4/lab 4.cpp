﻿#include <iostream>


//Посчитайте количество всех возможных счастливых трамвайных билетиков. Номер билета содержит 6 цифр.

int main()
{
	int s = 0;
	for (int i = 0; i <= 999; i++)
	{
		for (int j = 0; j <= 999; j++)
		{
			if (i % 10 + i % 100 / 10 + i / 100 == j % 10 + j % 100 / 10 + j / 100)
				s += 1;
		}
	}
	// Минус 1 потому, что билета 000000 не существует
	std::cout << (s - 1) << std::endl;

	return 0;
}
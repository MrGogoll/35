﻿/*Простая задача:
Дано число n - количество домиков на улице. Далее идет n целых чисел - количество
голубей на крыше этого дома. Необходимо посчитать, сколько всего голубей живет на улице!*/

#include <iostream>
using namespace std;
int main()
{
	int n,q=0;
	cin >> n;
	int mass[100];
	
	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
		q += mass[i];
	}
	cout << q;
}
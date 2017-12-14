//03.12.17
//Урок 3, модуль 2, практическая
//Главатских Д.Н.


#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
using namespace std;


int main()
{

	setlocale(LC_ALL, "Rus");
myStart:
	int task = 0;
	char yn = 0;
	cout << "Введите номер задания в диапозоне от 1 до 12\n - ";
	cin >> task;
	if (task < 1 || task > 12)
	{
		cout << "Введенный Вами номер задания не существует.\n";
		goto myStart;

	}
#pragma region TASK1
	
	else if (task == 1)
	{	
		task1:
		cout << "Записать условие, которое является истинным,\n";
		cout << "когда только одно из чисел X, Y и Z кратно пяти.\n";
		int x, y, z;
		cout << "Введите число Х = \n";
		cin >> x;
		cout << "Введите число Y = \n";
		cin >> y;
		cout << "Введите число Z = \n";
		cin >> z;
		int resx = x % 5;
		int resy = y % 5;
		int resz = z % 5;

		if (((resx == 0) && (resy == 0) && (resz == 0)) || (resx == 0) && (resy == 0) || (resy == 0) && (resz == 0) || 
			(resx == 0) && (resz == 0))
		{
			cout << "Больше чем одно число кратно 5\n";
			cout << "Согласно условию лишь одно число должно быть кратным 5.\n";
			cout << "Введите числа ещё раз\n";
			goto task1;			
		}
		else if (resx == 0)
		{
			cout << "Число X кратно 5 \n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if (resy == 0)
		{
			cout << "Число Y кратно 5 \n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if (resy == 0)
		{
			cout << "Число Z кратно 5 \n";	
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "Ни одно из чисел не кратно 5\nВведите числа ещё раз\n";
			goto task1;
		}
	}
#pragma endregion

#pragma region TASK2

	else if (task == 2)
	{	
		task2:
		cout << "Записать условие, которое является истинным,\n";
		cout << "когда хотя бы одно из чисел X, Y и Z больше 80\n";
		int x, y, z;
		cout << "Введите число Х = \n";
		cin >> x;
		cout << "Введите число Y = \n";
		cin >> y;
		cout << "Введите число Z = \n";
		cin >> z;

		if ((x > 80) && (y > 80) && (z > 80))
		{
			cout << "Все числа > 80\n";
			
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if ((x > 80) && (y > 80))
		{
			cout << "Числа " << x <<" и " << y << " > 80\n";
			
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if ((y > 80) && (z > 80))
		{
			cout << "Числа " << y << " и " << z << " > 80\n";
			
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if ((x > 80) && (z > 80))
		{
			cout << "Числа " << x << " и " << z << " > 80\n";
			
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}

		else if (x > 80)
		{
			cout << "Число " << x << " > 80\n";
			
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if (y > 80)
		{
			cout << "Число " << y << " > 80\n";
			
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if (z > 80)
		{
			cout << "Число " << z << " > 80\n";
			
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "Все числа < или = 80\n";
			cout << "Ни одно число не удовлятворяет условию задачи\nВведите числа ещё раз\n";
			goto task2;
		}
	}
#pragma endregion

#pragma region TASK3

	else if (task == 3)
	{
		int a;
		cout << "Записать логическое выражение, которые определяют,\n";
		cout << "что число А не принадлежит   интервалу  от -10 до -1 или интервалу от 2 до 15.\n";
		cout << "Введите число А = ";
		cin >> a;

		if (( a > -10) && ( a <-1))
		{
			cout << "Число А принадлежит интервалу от - 10 до - 1\n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if ((a > 2) && (a < 15))
		{
			cout << "Число А принадлежит интервалу от 2 до 15\n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if ((a < - 10 && a > 15))
		{
			cout << "Число А не принадлежит ни интервалу от 2 до 15\n ни инервалу от - 10 до -1\n" ;
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "Число А не принадлежит ни интервалу от 2 до 15\n ни инервалу от - 10 до -1\n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
	}
#pragma endregion

#pragma region TASK4

	else if (task == 4)
	{
		int a;
		cout << "Записать логическое выражение, которые определяет,\n";
		cout << "что число А является четырехзначным, но не равно 4999.\n";
		cout << "введите число A =";
		cin >> a;

		if (a == 4999)
		{
			cout << "Введенное число 4999 \n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if (a >= 1000 && a <= 9999)
		{
			cout << "Введенное число является четырехзначным \n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "Введенное число либо отрицательно, либо не четырехзначное\n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
	}
#pragma endregion

#pragma region TASK5
	else if (task == 5)
	{	
		cout << "Записать логическое выражение, определяющее какая дробь больше А/B или C/D\n";
		float a, b, c, d;
		cout << "Введите число A = \n";
		cin >> a;
		cout << "Введите число B = \n";
		cin >> b;
		cout << "Введите число C = \n";
		cin >> c;
		cout << "Введите число D = \n";
		cin >> d;

		if (a / b > c / d)
		{
			cout << "A/B > C/D\n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else if (a / b < c / d)
		{
			cout << "A/B < C/D\n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			cout << "Числа равны \n";
			cout << "Задание выполнено!\n";
			cout << "Введите y если хотите вернутся к выбору задания\n";
			cout << "Введите n если хотите завершить программу\n";
			cin >> yn;
			if (yn == 'y')
			{
				system("cls");
				goto myStart;
			}
			else
			{
				return 0;
			}
		}
	}

#pragma endregion

#pragma region TASK6
	else if (task == 6)
	{	
		task6:
		int x, y;
		cout << "Даны координаты поля шахматной доски х, у (целые числа, лежащие в диапазоне 1-8)\n";
		cout << "Учитывая, что левое нижнее поле доски (1,1) является черным, проверить истинность высказывания: \n";
		cout << "“Данное поле является белым”\n";
		cout << "Введите число X = ";
		cin >> x;
		cout << "\nВведите число Y = ";
		cin >> y;
		int res = y % 2;
		int res2 = x % 2;

		if (((x >= 1) && (x <= 8))&&((y >= 1) && (y <= 8)))
		{
			cout << "Введеные числа удовлетворяют условию\n";
			if ((res2 != 0) && res == 0)
			{	
				cout << "данное поле является белым\n";
				cout << "Задание выполнено!\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}
			}
			else if ((res2 == 0) && (res != 0))
			{
				cout << "данное поле является белым\n";
				cout << "Задание выполнено!\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}
			} 
			else if((res2 == 0) && (res == 0))
			{
				cout << "Однако, данное поле является черным\nВведите координаты ещё раз\n";
				goto task6;
			}
			else
			{
				cout << "Однако, данное поле является черным\nВведите координаты ещё раз\n";
				goto task6;
			}
			
		}
		else
		{
			cout << "Введеные числа не удовлетворяют условию\n";
			cout << "Введите числа повторно\n";
			goto task6;
		}
	}
#pragma endregion

#pragma region TASK7

	else if (task == 7)
	{
		task7:
		int x1, y1, x2, y2;
		cout << "Даны координаты двух разных полей шахматной доски:\n";
		cout << "х1, y1, x2, у2 (целые числа, лежащие в диапазоне 1-8).\n";
		cout << "Проверить истинность высказывания:\n";
		cout << "«Ладья за один ход может перейти с одного поля на другое»\n";
		cout << "Введите начальное координаты положения ладьи на доске\n допускаются от 1 до 8\n";
		cout << "Введите начальную координату x1 = ";
		cin >> x1;
		cout << "Введите начальную координату y1 = ";
		cin >> y1;
		cout << "Введите конечную координату x2 = ";
		cin >> x2;
		cout << "Введите конечную координату y2 = ";
		cin >> y2;

		if (((x1 >= 1) && (x1 <= 8)) && ((y1 >= 1) && (y1 <= 8)))
		{
			if (((x1 == x2) && (y1 != y2)) || ((y1 == y2) && (x1 != x2)))
			{
				cout << "Ладья может делать ход\n";
				cout << "Задание выполнено!\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}

			}
			else
			{
				cout << "В данном случае ладья не может делать ход\nВведите координаты ещё раз\n";
				goto task7;
			}

		}
		else
		{
			cout << "Введеные числа не удовлетворяют условию\n";
			cout << "Введите числа повторно\n";
			goto task7;
		}
	}

#pragma endregion

#pragma region TASK8
	else if (task == 8)
	{	
		cout << "Вычислить значение логического выражения при следующих значениях логических величин\n";
		cout << "А, В и С: А = Истина, В = Ложь, С = Ложь:\n";
		cout << "a.А или В и не С;\n";
		cout << "b.не А и не В;\n";
		cout << "c.не(А и С) или В;\n";
		cout << "d.А и не В или С;\n";
		cout << "e.А или(не(В и С)).\n";
		int a, b, c, resa, resb, resc, resd, resE;
		a = 1;
		b = 0;
		c = 0;
		resa = (a || b && !c);
		resb = (!a && !b);
		resc = (!(a && c) || b);
		resd = (a && !b || c);
		resE = (a || (!(b & c)));
		
		cout << resa << "\n";
		cout << resb << "\n";
		cout << resc << "\n";
		cout << resd << "\n";
		cout << resE << "\n";
		cout << "Задание выполнено!\n";
		cout << "Введите y если хотите вернутся к выбору задания\n";
		cout << "Введите n если хотите завершить программу\n";
		cin >> yn;
		if (yn == 'y')
		{
			system("cls");
			goto myStart;
		}
		else
		{
			return 0;
		}
	}
#pragma endregion

#pragma region TASK9
	else if (task == 9)
	{	
		
		cout << "Вычислить значение логического выражения:\n";
		cout << "a.	(x >= 0) или(y2 != 4) при x = 1, y = 2;\n";
		cout << "b.	(x >= 0) и(y2 != 4) при x = 1, y = 2;\n";
		cout << "c.	(x · у != 0) и(у > x) при x = 2, y = 1;\n";
		cout << "d.	(x · у != 0) или(у < x) при x = 2, y = 1;\n";
		task9:
		cout << "Введите с a до d для выбора задания - ";
		char q = 0;
		char a = 0;
		char b = 0;
		char c = 0;
		char d = 0;
		cin >> q;
		
		if(q == 'a')
		{
			int x = 1;
			int y = 2;
			if ((x >= 0) || (pow(y,2) != 4))
			{
				cout << "Вычисление логического выражения завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				cout << "Логическое выражения не можем быть завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}

			}
		}
		else if (q == 'b')
		{
			int x = 1;
			int y = 2;
			if ((x >= 0) && (pow(y, 2) != 4))
			{
				cout << "Вычисление логического выражения завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}
			} 
			else
			{
				cout << "Логическое выражения не можем быть завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}

			}
		}
		else if (q == 'c')
		{
			int x = 2;
			int y = 1;
			if ((x * y) != 0 && y > x)
			{
				cout << "Вычисление логического выражения завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				cout << "Логическое выражения не можем быть завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}

			}

		}
		else if (q == 'd')
		{	
			int x = 2;
			int y = 1;
			if ((x * y) != 0 || (y < x))
			{
				cout << "Вычисление логического выражения завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				cout << "Логическое выражения не можем быть завершено\n";
				cout << "Введите y если хотите вернутся к выбору задания\n";
				cout << "Введите n если хотите завершить программу\n";
				cin >> yn;
				if (yn == 'y')
				{
					system("cls");
					goto myStart;
				}
				else
				{
					return 0;
				}

			}
				
		}
		else
		{	
			cout << "Вы ввели неверное значение\nПопробуйте ещё раз\n";
			goto task9;
		}
	}


#pragma endregion

#pragma region TASK10
	else if (task == 10)
	{
		cout << "Вычислить значение логического выражения\n";
		cout << "при всех возможных значениях логических величин X и Y:\n";
		cout << "a.	не (X или Y);\n";
		cout << "b.	не X и Y\n";
		cout << "c.	X и не Y\n";
		int x = 1;
		int y = 0;
		int resa = !(x || y);
		int resb = !x & y;
		int resc = x && !y;
		cout << resa << "\n";
		cout << resb << "\n";
		cout << resc << "\n";
		cout << "Задание завершено\n";
		cout << "Введите y если хотите вернутся к выбору задания\n";
		cout << "Введите n если хотите завершить программу\n";
		cin >> yn;
		if (yn == 'y')
		{
			system("cls");
			goto myStart;
		}
		else
		{
			return 0;
		}

	}
	

#pragma endregion

#pragma region TASK11
	else if (task == 11)
	{
		cout << "Вычислить значение логического выражения\n";
		cout << "при всех возможных значениях логических величин X и Y:\n";
		cout << "a.	не (X и не Y) или X\n";
		cout << "b.	Y и не X или не Y\n";
		cout << "c.	не Y и не X или Y\n";
		float x = 1;
		float y = 0;
		float resa, resb, resc;
		resa = (!(x && !y) || x);
		resb = (y && !x || !y);
		resc = (!y & !x || y);
		cout << resa << "\n";
		cout << resb << "\n";
		cout << resc << "\n";
		cout << "Задание завершено\n";
		cout << "Введите y если хотите вернутся к выбору задания\n";
		cout << "Введите n если хотите завершить программу\n";
		cin >> yn;
		if (yn == 'y')
		{
			system("cls");
			goto myStart;
		}
		else
		{
			return 0;
		}

	}


#pragma endregion

#pragma region TASK12

	else if (task == 12)
	{	
		task12:
		cout << "Данная задача имеет 3 задания\n";
		cout << "Введите a, b или c для выбора\n";
		char a = 0;
		char b = 0;
		char c = 0;
		char var = 0;
		cin >> var;
		if (var == 'a')
		{
			cout << "Записать логические выражения, которые имеют значение \"Истина\"\n";
			cout << "только при выполнении указанных условий:\n";
			cout << "i.х > 2 и у > 3;\n";
			cout << "ii.х > 1 или y> -2;\n";
			cout << "iii.х >= 0 и у < 5;\n";
			cout << "iv.х > 3 или x < -1;\n";
			cout << "v.х > 3 и x < 10;\n";
			float x, y;
			cout << "Введите значение x - ";
			cin >> x;
			cout << "\nВведите значение y - ";
			cin >> y;

			if ((x > 2) && (y > 3))
			{
				cout << "Истина\n";

			}
			else if ((x > 1) || y > -2)
			{
				cout << "Истина\n";
			}
			else if ((x >= 0) && (y < 5))
			{
				cout << "Истина\n";
			}
			else if ((x > 3) || (x < -1))
			{
				cout << "Истина\n";
			}
			else if ((x > 3) && (x < 10))
			{
				cout << "Истина\n";
			}
			else
			{
				cout << "Ложь\n";
			}
		}
		else if (var == 'b')
		{
			cout << "Записать условие, которое является истинным, когда:\n";
			cout << "i.каждое из чисел X и Y больше 100;\n";
			cout << "ii.только одно из чисел X и Y четное;\n";
			cout << "iii.хотя бы одно из чисел X и Y положительно;\n";
			cout << "iv.каждое из чисел X, Y, Z кратно трем;\n";
			cout << "v.только одно из чисел X, Y и Z меньше 50;\n";
			cout << "vi.хотя бы одно из чисел X, Y, Z отрицательно.\n";
			int x, y, z;
			cout << "Введите значение x - ";
			cin >> x;
			cout << "\nВведите значение y - ";
			cin >> y;
			cout << "\nВведите значение z - ";
			cin >> z;

			if ((x > 100) && (y > 100))
			{
				cout << "Истина\n";
			}
			else if ((x % 2 == 0) || (y % 2 == 0))
			{
				cout << "Истина\n";
			}
			else if (x >= 0 || y >= 0)
			{
				cout << "Истина\n";
			}
			else if ((x % 3 == 0) && (y % 3 == 0) && (z % 3 == 0))
			{
				cout << "Истина\n";
			}
			else if ((x < 50) || (y < 50) || (z < 50))
			{
				cout << "Истина\n";
			}
			else if ((x < 0) || (y < 0) || (z < 0))
			{
				cout << "Истина\n";
			}
			else
			{
				cout << "Ложь\n";
			}

		}
		else if (var == 'c')
		{
			cout <<"Записать условие, которое является истинным, когда:\n";
			cout << "i.каждое из чисел X и Y нечетное;\n";
			cout << "ii.только одно из чисел X и Y меньше 20;\n";
			cout << "iii.хотя бы одно из чисел X и Y равно нулю;\n";
			cout << "iv.каждое из чисел X, Y, Z отрицательное;\n";
			cout << "v.только одно из чисел X, Y и Z кратно пяти;\n";
			cout << "vi.хотя бы одно из чисел X, Y, Z больше 100.\n";
			int x, y, z;
			cout << "Введите значение x - ";
			cin >> x;
			cout << "\nВведите значение y - ";
			cin >> y;
			cout << "\nВведите значение z - ";
			cin >> z;
			if ((x % 2 != 0) && (y % 2 != 0))
			{
				cout << "Истина\n";
			}
			else if ((x < 20) || (y < 20))
			{
				cout << "Истина\n";
			}
			else if ((x == 0) || (y == 0))
			{
				cout << "Истина\n";
			}
			else if ((x < 0) && (y < 0) && (z < 0))
			{
				cout << "Истина\n";
			}
			else if ((x % 5 == 0) || (y % 5 == 0) || (z % 5 == 0))
			{
				cout << "Истина\n";
			}
			else if ((x > 100) || (y > 100) || (z > 100))
			{
				cout << "Истина\n";
			}
			else
			{
				cout << "Ложь\n";
			}
		}
		else
		{
			cout << "доступны только варианты a, b или с\n";
			goto task12;
		}
	}

#pragma endregion


}






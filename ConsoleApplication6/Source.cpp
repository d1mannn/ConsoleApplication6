//03.12.17
//���� 3, ������ 2, ������������
//���������� �.�.


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
	cout << "������� ����� ������� � ��������� �� 1 �� 12\n - ";
	cin >> task;
	if (task < 1 || task > 12)
	{
		cout << "��������� ���� ����� ������� �� ����������.\n";
		goto myStart;

	}
#pragma region TASK1
	
	else if (task == 1)
	{	
		task1:
		cout << "�������� �������, ������� �������� ��������,\n";
		cout << "����� ������ ���� �� ����� X, Y � Z ������ ����.\n";
		int x, y, z;
		cout << "������� ����� � = \n";
		cin >> x;
		cout << "������� ����� Y = \n";
		cin >> y;
		cout << "������� ����� Z = \n";
		cin >> z;
		int resx = x % 5;
		int resy = y % 5;
		int resz = z % 5;

		if (((resx == 0) && (resy == 0) && (resz == 0)) || (resx == 0) && (resy == 0) || (resy == 0) && (resz == 0) || 
			(resx == 0) && (resz == 0))
		{
			cout << "������ ��� ���� ����� ������ 5\n";
			cout << "�������� ������� ���� ���� ����� ������ ���� ������� 5.\n";
			cout << "������� ����� ��� ���\n";
			goto task1;			
		}
		else if (resx == 0)
		{
			cout << "����� X ������ 5 \n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� Y ������ 5 \n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� Z ������ 5 \n";	
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "�� ���� �� ����� �� ������ 5\n������� ����� ��� ���\n";
			goto task1;
		}
	}
#pragma endregion

#pragma region TASK2

	else if (task == 2)
	{	
		task2:
		cout << "�������� �������, ������� �������� ��������,\n";
		cout << "����� ���� �� ���� �� ����� X, Y � Z ������ 80\n";
		int x, y, z;
		cout << "������� ����� � = \n";
		cin >> x;
		cout << "������� ����� Y = \n";
		cin >> y;
		cout << "������� ����� Z = \n";
		cin >> z;

		if ((x > 80) && (y > 80) && (z > 80))
		{
			cout << "��� ����� > 80\n";
			
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� " << x <<" � " << y << " > 80\n";
			
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� " << y << " � " << z << " > 80\n";
			
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� " << x << " � " << z << " > 80\n";
			
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� " << x << " > 80\n";
			
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� " << y << " > 80\n";
			
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� " << z << " > 80\n";
			
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "��� ����� < ��� = 80\n";
			cout << "�� ���� ����� �� ������������� ������� ������\n������� ����� ��� ���\n";
			goto task2;
		}
	}
#pragma endregion

#pragma region TASK3

	else if (task == 3)
	{
		int a;
		cout << "�������� ���������� ���������, ������� ����������,\n";
		cout << "��� ����� � �� �����������   ���������  �� -10 �� -1 ��� ��������� �� 2 �� 15.\n";
		cout << "������� ����� � = ";
		cin >> a;

		if (( a > -10) && ( a <-1))
		{
			cout << "����� � ����������� ��������� �� - 10 �� - 1\n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� � ����������� ��������� �� 2 �� 15\n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� � �� ����������� �� ��������� �� 2 �� 15\n �� �������� �� - 10 �� -1\n" ;
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� � �� ����������� �� ��������� �� 2 �� 15\n �� �������� �� - 10 �� -1\n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
		cout << "�������� ���������� ���������, ������� ����������,\n";
		cout << "��� ����� � �������� ��������������, �� �� ����� 4999.\n";
		cout << "������� ����� A =";
		cin >> a;

		if (a == 4999)
		{
			cout << "��������� ����� 4999 \n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "��������� ����� �������� �������������� \n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "��������� ����� ���� ������������, ���� �� ��������������\n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
		cout << "�������� ���������� ���������, ������������ ����� ����� ������ �/B ��� C/D\n";
		float a, b, c, d;
		cout << "������� ����� A = \n";
		cin >> a;
		cout << "������� ����� B = \n";
		cin >> b;
		cout << "������� ����� C = \n";
		cin >> c;
		cout << "������� ����� D = \n";
		cin >> d;

		if (a / b > c / d)
		{
			cout << "A/B > C/D\n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "����� ����� \n";
			cout << "������� ���������!\n";
			cout << "������� y ���� ������ �������� � ������ �������\n";
			cout << "������� n ���� ������ ��������� ���������\n";
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
		cout << "���� ���������� ���� ��������� ����� �, � (����� �����, ������� � ��������� 1-8)\n";
		cout << "��������, ��� ����� ������ ���� ����� (1,1) �������� ������, ��������� ���������� ������������: \n";
		cout << "������� ���� �������� �����\n";
		cout << "������� ����� X = ";
		cin >> x;
		cout << "\n������� ����� Y = ";
		cin >> y;
		int res = y % 2;
		int res2 = x % 2;

		if (((x >= 1) && (x <= 8))&&((y >= 1) && (y <= 8)))
		{
			cout << "�������� ����� ������������� �������\n";
			if ((res2 != 0) && res == 0)
			{	
				cout << "������ ���� �������� �����\n";
				cout << "������� ���������!\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "������ ���� �������� �����\n";
				cout << "������� ���������!\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "������, ������ ���� �������� ������\n������� ���������� ��� ���\n";
				goto task6;
			}
			else
			{
				cout << "������, ������ ���� �������� ������\n������� ���������� ��� ���\n";
				goto task6;
			}
			
		}
		else
		{
			cout << "�������� ����� �� ������������� �������\n";
			cout << "������� ����� ��������\n";
			goto task6;
		}
	}
#pragma endregion

#pragma region TASK7

	else if (task == 7)
	{
		task7:
		int x1, y1, x2, y2;
		cout << "���� ���������� ���� ������ ����� ��������� �����:\n";
		cout << "�1, y1, x2, �2 (����� �����, ������� � ��������� 1-8).\n";
		cout << "��������� ���������� ������������:\n";
		cout << "������ �� ���� ��� ����� ������� � ������ ���� �� ������\n";
		cout << "������� ��������� ���������� ��������� ����� �� �����\n ����������� �� 1 �� 8\n";
		cout << "������� ��������� ���������� x1 = ";
		cin >> x1;
		cout << "������� ��������� ���������� y1 = ";
		cin >> y1;
		cout << "������� �������� ���������� x2 = ";
		cin >> x2;
		cout << "������� �������� ���������� y2 = ";
		cin >> y2;

		if (((x1 >= 1) && (x1 <= 8)) && ((y1 >= 1) && (y1 <= 8)))
		{
			if (((x1 == x2) && (y1 != y2)) || ((y1 == y2) && (x1 != x2)))
			{
				cout << "����� ����� ������ ���\n";
				cout << "������� ���������!\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "� ������ ������ ����� �� ����� ������ ���\n������� ���������� ��� ���\n";
				goto task7;
			}

		}
		else
		{
			cout << "�������� ����� �� ������������� �������\n";
			cout << "������� ����� ��������\n";
			goto task7;
		}
	}

#pragma endregion

#pragma region TASK8
	else if (task == 8)
	{	
		cout << "��������� �������� ����������� ��������� ��� ��������� ��������� ���������� �������\n";
		cout << "�, � � �: � = ������, � = ����, � = ����:\n";
		cout << "a.� ��� � � �� �;\n";
		cout << "b.�� � � �� �;\n";
		cout << "c.��(� � �) ��� �;\n";
		cout << "d.� � �� � ��� �;\n";
		cout << "e.� ���(��(� � �)).\n";
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
		cout << "������� ���������!\n";
		cout << "������� y ���� ������ �������� � ������ �������\n";
		cout << "������� n ���� ������ ��������� ���������\n";
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
		
		cout << "��������� �������� ����������� ���������:\n";
		cout << "a.	(x >= 0) ���(y2 != 4) ��� x = 1, y = 2;\n";
		cout << "b.	(x >= 0) �(y2 != 4) ��� x = 1, y = 2;\n";
		cout << "c.	(x � � != 0) �(� > x) ��� x = 2, y = 1;\n";
		cout << "d.	(x � � != 0) ���(� < x) ��� x = 2, y = 1;\n";
		task9:
		cout << "������� � a �� d ��� ������ ������� - ";
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
				cout << "���������� ����������� ��������� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "���������� ��������� �� ����� ���� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "���������� ����������� ��������� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "���������� ��������� �� ����� ���� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "���������� ����������� ��������� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "���������� ��������� �� ����� ���� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "���������� ����������� ��������� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
				cout << "���������� ��������� �� ����� ���� ���������\n";
				cout << "������� y ���� ������ �������� � ������ �������\n";
				cout << "������� n ���� ������ ��������� ���������\n";
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
			cout << "�� ����� �������� ��������\n���������� ��� ���\n";
			goto task9;
		}
	}


#pragma endregion

#pragma region TASK10
	else if (task == 10)
	{
		cout << "��������� �������� ����������� ���������\n";
		cout << "��� ���� ��������� ��������� ���������� ������� X � Y:\n";
		cout << "a.	�� (X ��� Y);\n";
		cout << "b.	�� X � Y\n";
		cout << "c.	X � �� Y\n";
		int x = 1;
		int y = 0;
		int resa = !(x || y);
		int resb = !x & y;
		int resc = x && !y;
		cout << resa << "\n";
		cout << resb << "\n";
		cout << resc << "\n";
		cout << "������� ���������\n";
		cout << "������� y ���� ������ �������� � ������ �������\n";
		cout << "������� n ���� ������ ��������� ���������\n";
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
		cout << "��������� �������� ����������� ���������\n";
		cout << "��� ���� ��������� ��������� ���������� ������� X � Y:\n";
		cout << "a.	�� (X � �� Y) ��� X\n";
		cout << "b.	Y � �� X ��� �� Y\n";
		cout << "c.	�� Y � �� X ��� Y\n";
		float x = 1;
		float y = 0;
		float resa, resb, resc;
		resa = (!(x && !y) || x);
		resb = (y && !x || !y);
		resc = (!y & !x || y);
		cout << resa << "\n";
		cout << resb << "\n";
		cout << resc << "\n";
		cout << "������� ���������\n";
		cout << "������� y ���� ������ �������� � ������ �������\n";
		cout << "������� n ���� ������ ��������� ���������\n";
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
		cout << "������ ������ ����� 3 �������\n";
		cout << "������� a, b ��� c ��� ������\n";
		char a = 0;
		char b = 0;
		char c = 0;
		char var = 0;
		cin >> var;
		if (var == 'a')
		{
			cout << "�������� ���������� ���������, ������� ����� �������� \"������\"\n";
			cout << "������ ��� ���������� ��������� �������:\n";
			cout << "i.� > 2 � � > 3;\n";
			cout << "ii.� > 1 ��� y> -2;\n";
			cout << "iii.� >= 0 � � < 5;\n";
			cout << "iv.� > 3 ��� x < -1;\n";
			cout << "v.� > 3 � x < 10;\n";
			float x, y;
			cout << "������� �������� x - ";
			cin >> x;
			cout << "\n������� �������� y - ";
			cin >> y;

			if ((x > 2) && (y > 3))
			{
				cout << "������\n";

			}
			else if ((x > 1) || y > -2)
			{
				cout << "������\n";
			}
			else if ((x >= 0) && (y < 5))
			{
				cout << "������\n";
			}
			else if ((x > 3) || (x < -1))
			{
				cout << "������\n";
			}
			else if ((x > 3) && (x < 10))
			{
				cout << "������\n";
			}
			else
			{
				cout << "����\n";
			}
		}
		else if (var == 'b')
		{
			cout << "�������� �������, ������� �������� ��������, �����:\n";
			cout << "i.������ �� ����� X � Y ������ 100;\n";
			cout << "ii.������ ���� �� ����� X � Y ������;\n";
			cout << "iii.���� �� ���� �� ����� X � Y ������������;\n";
			cout << "iv.������ �� ����� X, Y, Z ������ ����;\n";
			cout << "v.������ ���� �� ����� X, Y � Z ������ 50;\n";
			cout << "vi.���� �� ���� �� ����� X, Y, Z ������������.\n";
			int x, y, z;
			cout << "������� �������� x - ";
			cin >> x;
			cout << "\n������� �������� y - ";
			cin >> y;
			cout << "\n������� �������� z - ";
			cin >> z;

			if ((x > 100) && (y > 100))
			{
				cout << "������\n";
			}
			else if ((x % 2 == 0) || (y % 2 == 0))
			{
				cout << "������\n";
			}
			else if (x >= 0 || y >= 0)
			{
				cout << "������\n";
			}
			else if ((x % 3 == 0) && (y % 3 == 0) && (z % 3 == 0))
			{
				cout << "������\n";
			}
			else if ((x < 50) || (y < 50) || (z < 50))
			{
				cout << "������\n";
			}
			else if ((x < 0) || (y < 0) || (z < 0))
			{
				cout << "������\n";
			}
			else
			{
				cout << "����\n";
			}

		}
		else if (var == 'c')
		{
			cout <<"�������� �������, ������� �������� ��������, �����:\n";
			cout << "i.������ �� ����� X � Y ��������;\n";
			cout << "ii.������ ���� �� ����� X � Y ������ 20;\n";
			cout << "iii.���� �� ���� �� ����� X � Y ����� ����;\n";
			cout << "iv.������ �� ����� X, Y, Z �������������;\n";
			cout << "v.������ ���� �� ����� X, Y � Z ������ ����;\n";
			cout << "vi.���� �� ���� �� ����� X, Y, Z ������ 100.\n";
			int x, y, z;
			cout << "������� �������� x - ";
			cin >> x;
			cout << "\n������� �������� y - ";
			cin >> y;
			cout << "\n������� �������� z - ";
			cin >> z;
			if ((x % 2 != 0) && (y % 2 != 0))
			{
				cout << "������\n";
			}
			else if ((x < 20) || (y < 20))
			{
				cout << "������\n";
			}
			else if ((x == 0) || (y == 0))
			{
				cout << "������\n";
			}
			else if ((x < 0) && (y < 0) && (z < 0))
			{
				cout << "������\n";
			}
			else if ((x % 5 == 0) || (y % 5 == 0) || (z % 5 == 0))
			{
				cout << "������\n";
			}
			else if ((x > 100) || (y > 100) || (z > 100))
			{
				cout << "������\n";
			}
			else
			{
				cout << "����\n";
			}
		}
		else
		{
			cout << "�������� ������ �������� a, b ��� �\n";
			goto task12;
		}
	}

#pragma endregion


}






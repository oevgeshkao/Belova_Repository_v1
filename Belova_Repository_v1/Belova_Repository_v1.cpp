// Belova_Repository_v1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "conio.h"
using namespace std;
int x=0;
int n;
bool F = true;
bool VvodX(string input)
{
	
	if (input.empty() || stoi(input) < 99 || stoi(input) > 999) return false;
	try
	{
		int number = stoi(input);
	}
	catch (...)
	{
		return false;
	}
	return true;
	
}
bool VvodMenshN(string input)
{
	if (input.empty() || stoi(input) < 0 || stoi(input) >3) return false;
	try
	{
		int number = stoi(input);
	}
	catch (...)
	{
		return false;
	}
	return true;


}
int Firsth(int x)
{
	return  (x - x % 100) / 100;
}
int NX(int x,int n)
{
	cout << "X= " << x << endl;
	cout << "N= " << n << endl;
	switch (n) {
	case 1:
		cout << "Первая цифра Х= " << (x - x % 100) / 100<<endl;
		return (x - x % 100) / 100;
		break;
	case 2:
		cout << "Вторая цифра Х= " << (x % 100 - x % 10) / 10 << endl;
		return (x % 100 - x % 10) / 10;
		break;
	case 3:
		cout << "Третья цифра Х= " << (x % 100) % 10 << endl;
		return (x % 100) % 10;
		break;

	default:
		break;
	}
}

int get_variant(int count) {
	int variant; // считываемый номер пункта меню
	// пока ввод некорректен, сообщаем об этом и просим повторить его
	while (!(cin >> variant) || (cin.peek() != '\n') || (variant < 0 ||
		variant>count))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Incorrect input. Try again: ";// выводим сообщение об ошибке
	}
	return variant;
}
void print_menu() {
	
	system("cls"); // очищаем экран
	cout << "Выбор операции:" << endl;
	cout << "1. ввести целое трехзначное число X " << endl;
	cout << "2. ввести цифру N (которая меньше числа разрядов числа X" << endl;
	cout << "3. найти первую цифру числа X " << endl;
	cout << "4. найти N -ю цифру числа X (цифры в числе нумеруются справа налево)" << endl;
	cout << "5. Выход" << endl;
	cout << ">";
}
int main()
{
	setlocale(LC_ALL, "Russian");
	string str_input;
	int variant;
	do {
		print_menu();
		variant = get_variant(6); // получаем номер выбранного пункта меню
		switch (variant) {
		case 1:
			getline(cin, str_input);
			while (!VvodX(str_input))
			{
				cout << "Введите X" << endl;
				getline(cin, str_input);
			}
			 x = stoi(str_input);
			break;
		case 2:
			if (x > 0) {

				getline(cin, str_input);
				while (!VvodMenshN(str_input))
				{
					cout << "Введите N" << endl;
					getline(cin, str_input);
				}
				n = stoi(str_input);
			}
			else { cout << "Сначала введите Х"<<endl; }
			break;
		case 3:
			
			if (x > 0) {
				cout << "Первая цифра Х= " << Firsth(x);}
			else { cout << "Сначала введите Х" << endl; }
			break;
			
		case 4:
			
			if (x == 0) { cout << "Сначала введите Х" << endl;}
			if (n==0) { cout << "Сначала введите N" << endl; }
			if(x!=0 && n!=0 )NX(x,n);
			break;
		}
		if (variant != 5)
		{
			cout << "Press any key..." << endl;
			//задерживаем выполнение, чтобы пользователь мог увидеть результат выполнения выбранного пункта
			while (!_kbhit());
		}
	} while (variant != 5);
	return 0;

}


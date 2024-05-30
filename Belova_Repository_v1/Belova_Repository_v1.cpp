// Belova_Repository_v1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "conio.h"
using namespace std;
int x=0;
int n;
void VvodX()
{
	cout << "Ввод X: ";
	while (!(cin >> x) || (cin.peek() != '\n') || (x < 0 ||x <100 || x > 999))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Incorrect input. Try again: ";// выводим сообщение об ошибке
	}
	cout << "X= " << x << endl;
}
void VvodMenshN()
{
	cout << "Ввод N: ";
	while (!(cin >> n) || (cin.peek() != '\n') || ( n>3))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Incorrect input. Try again: ";// выводим сообщение об ошибке
	}

	cout << "X= " << x << endl;
	cout << "N= " << n << endl;

}
void Firsth()
{

}
void NX()
{

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
	int variant;
	do {
		print_menu();
		variant = get_variant(6); // получаем номер выбранного пункта меню
		switch (variant) {
		case 1:
			VvodX();
			break;
		case 2:
			if (x > 0) VvodMenshN();
			else { cout << "Сначала введите Х"<<endl;VvodX(); }
			break;
		case 3:
			Firsth();
			break;
		case 4:
			NX();
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


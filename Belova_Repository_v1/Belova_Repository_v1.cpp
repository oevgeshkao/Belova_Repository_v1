// Belova_Repository_v1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "conio.h"
using namespace std;
int x;
int VvodX()
{

}
int VvodMenshN()
{

}
int Firsth()
{

}
int NX()
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
	setlocale(LC_ALL, "Russian");
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
	int variant;
	do {
		print_menu();
		variant = get_variant(6); // получаем номер выбранного пункта меню
		switch (variant) {
		case 1:
			VvodX();
			break;
		case 2:
			VvodMenshN();
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


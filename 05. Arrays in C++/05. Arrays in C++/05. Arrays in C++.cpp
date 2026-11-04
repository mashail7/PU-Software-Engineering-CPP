#include <iostream>
#include <math.h>
#include <Windows.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void inputNamesAndPhones(string names[], int phones[]) {
	const int SIZE = 3;
	cout << "Въведете имена и телефонни номера за :" << SIZE << " човека: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Име: " << i + 1 << endl;
		cin >> names[i];
		cout << "Телефон: " << i + 1 << endl;
		cin >> phones[i];
	}
}

void printNamesAndPhones(const string names[], const int phones[]) {
	const int SIZE = 3;
	cout << "Въведените имена и телефонни номера са: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Име: " << names[i] << ", Телефон: " << phones[i] << endl;
	}
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    

	// Масиви в C++
	// Деклариране на масив с 4 елемента
	string cars[4] = { "Volvo", "BMW", "Ford", "Tesla" };
	int myNum[3] = { 10, 20, 30 };

	// Достъп до елементите на масива
	cout << cars[0] << endl; // Volvo

	// Масиви и цикли
	// Обхождане на елементите на масива с for цикъл
	for (int i = 0; i < 4; i++) {
		cout << cars[i] << endl;
	}

	// Обхождане на масив от низове с цикъл for-each
	for (string car : cars) {
		cout << car << endl;
	}

	// Пропускане на размера на масив
	// Компилатора може автоматично да определи размера на масива въз основа на зададените начални стойности
	string car[] = { "Volvo", "BMW", "Ford" };
	
	// Деклариране на масив без задаване на начални стойности
	string car1[5];
	car1[0] = "Volvo";
	car1[1] = "BMW";
	car1[2] = "Ford";
	car1[3] = "Mazda";
	car1[4] = "Tesla";

	// Размерът на обикновения масив е фиксиран, не можем да добавяме или премахваме елементи от масива

	// Вектори - масиви с променлив размер
	// Вектор с три елемента
	vector<string> cars1 = { "Volvo", "BMW", "Ford" };

	// Добавяне на елемент в края на вектора
	cars1.push_back("Tesla");

	// Определяне на размера на масив
	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	cout << sizeof(myNumbers) << endl; // 20 (5 елемента * 4 байта)

	// Определяне на броя на елементите в масив
	int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
	cout << getArrayLength << endl; // 5

	//Обхождане на масив с помощта на sizeof()
	for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
		cout << myNumbers[i] << endl;
	}

	// Практически пример:
	// Програма ,която изчислява средната възраст на група хора, като използва масив за съхранение на възрастта на всеки човек.
	int ages[8] = { 20, 22, 18, 48, 26, 87, 70, 35 };
	float avg, sum = 0;
	for (int i = 0; i < sizeof(ages) / sizeof(ages[0]); i++) {
		sum += ages[i];
	}
	avg = sum / (sizeof(ages) / sizeof(ages[0]));
	cout << "Средна възраст: " << avg << endl;


	// Многомерни масиви

	// Деклариране на двумерен масив с 2 реда и 4 колони
	string letters[2][4] = {
		{"A", "B", "C", "D" },
		{ "E", "F", "G", "H" }
	};

	// Деклариране на тримерен масив с 2 реда, 2 колони и 2 дълбочини
	string letters1[2][2][2] = {
		{
			{"A", "B"},
			{"C", "D"}
		},
		{
			{"E", "F"},
			{"G", "H"}
		}
	};

	// Достъп до елементите на многомерен масив
	cout << letters[0][0] << endl; // A
	cout << letters1[0][0][0] << endl; // A

	// Промяна на елементите на многомерен масив
	letters[0][0] = "Z";
	cout << letters[0][0] << endl; // Z

	// Обхождане на многомерен масив с вложени цикли
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << letters[i][j] << " ";
		}
		cout << endl;
	}


	// Зад.1 Напишете програма, която изисква потребителят да въведе стойностите на елементите на масив с фискиран размер.
	// След въвеждането програмата трябва да отпечата въведените стойности на масива.

	const int SIZE = 5;
	int arr[SIZE];

	cout << "Въведете " << SIZE << " стойности за масива: " << endl;

	// Четене на стойностите от потребителя и записването им в масива
	for (int i = 0; i < SIZE; i++) {
		cout << "Елемент " << i + 1 << endl;
		cin >> arr[i];
	}

	cout << "Масивът съдържа следните стойности: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	// Задача 2. Напишете програма, която изисква от потребителя да въведе имена и телефонни номера в два масива с фиксиран
	// размер. След въвеждането програмата трябва да отпечата въведените имена и телефонни номеран а хората.
	
	string names[SIZE];
	int phones[SIZE];
	inputNamesAndPhones(names, phones);
	printNamesAndPhones(names, phones);

	// Задача 3. Напишете програма която изисква от потребителя да въведе низове за елементи на два масива
	// с фиксиран размер. След въвеждането програмата трябва да отпечата въведените низове на двата масива
	// в обратен ред.

	const int SIZE1 = 3;
	string array[SIZE1];
	for (int i = 0; i < SIZE1; i++) {
		cout << "Въведете " << i + 1 << "-я низ: ";
		cin >> ws;
		getline(cin, array[i]);
	}

	cout << "-----------------" << endl;

	for (int i = SIZE1 - 1; i >= 0; i--) {
		cout << array[i] << endl;
	}

	return 0;
}
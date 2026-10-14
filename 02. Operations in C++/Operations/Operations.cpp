#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
using namespace std;

int main() {

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Операции с числа
	int x = 10;
	int y = 3;

	cout << (x + y) << "\n"; // 13
	cout << (x - y) << "\n"; // 7
	cout << (x * y) << "\n"; // 30
	cout << (x / y) << "\n"; // 3
	cout << (x % y) << "\n"; // 1)

	double a = 10.0;
	double b = 3.0;
	cout << (a / b) << "\n"; // 3.33333 (деление с дробен делител)

	// Инкрементиране и декрементиране
	int x1 = 5;
	++x1; // Увеличаване на x1 с 1

	int x2 = 5;
	--x2; // Намаляване на x2 с 1

	// Пример: Преброяване на хора
	int people = 0;
	// Влизат 3-ма души
	++people; // Добавяне на човек
	++people; // Добавяне на още един човек
	++people; // Добавяне на още един човек
	cout << people << "\n"; // 3"

	--people; // Един човек излиза
	cout << people << "\n"; // 2

	// Оператори за присвояване
	int xi = 10; // =
	
	// Комбинирани оператори за присвояване
	xi += 5; // x2 = x2 + 5
	xi *= 5; // x2 = x2 * 5
	
	// Оператори за сравнение
	int x3 = 5;
	int y3 = 3;
	cout << (x3 < y3) << "\n"; // false

	int age = 18;
	cout << (age >= 18) << "\n"; // true, може да гласува
	cout << (age <= 18) << "\n"; // false, не може да гласува

	//  Приоритет на операторите
	int result1 = 2 + 3 * 4; // result1 = 14 (3*4 се изчислява първо)
	int result2 = (2 + 3) * 4; // result2 = 20 (2+3 се изчислява първо)
	int result3 = 10 - 2 + 5; // result3 = 13 (10-2 се изчислява първо, след това се добавя 5)
	int result4 = 10 - (2 + 5); // result4 = 3 (2+5 се изчислява първо, след това се изважда от 10)

	// Работа с низове
	string greeting = "Hello and welcome!";
	cout << greeting << "\n"; // Hello and welcome!

	// Конкатенация на низове
	string firstName = "John";
	string lastName = "Doe";
	cout << (firstName + " " + lastName) << "\n"; // John Doe

	string fullName = firstName + " " + lastName;
	cout << fullName << "\n"; // John Doe

	string fullName2 = firstName.append(" ").append(lastName);
	cout << fullName2 << "\n"; // John Doe

	// Свързване на низове с числа
	string x4 = "10";
	string y4 = "15";
	string z4 = x4 + y4; // z = "1015"

	// Дължина на низове
	string txt = "ABCDEFGHIJ";
	cout << txt.length() << "\n"; // 10

	// Достъп до символи в низове
	string myString = "Hello";
	cout << myString[0] << "\n"; // H

	cout << myString[myString.length() - 1] << "\n"; // o

	// Промяна на символи в низове
	myString[0] = 'J';
	cout << myString << "\n"; // Jello

	// Метод at()
	cout << myString.at(1) << "\n"; // e

	// Специални символи
	string txt1 = "Днес изучаваме \"C++\" в университета";

	// Въвеждане на низове от потребителя
	string fName;
	getline(cin, fName); // Въвеждане на данни от клавиатурата
	cout << "Вашето име е: " << fName;

	// Пространство от имена в C++ за работа с низове
	// using namespace std може да липсва, като вместо него
	// пред имената на string и cout се постави префиксът
	// std::, където :: е операторът за разрешаване на обхват
	std::string fName1 = "Jhon Doe";
	std::cout << fName1;

	// Математически функции
	cout << max(10, 5) << "\n";
	cout << min(10, 5) << "\n";
	cout << sqrt(64) << "\n";
	cout << round(2.6) << "\n";
	cout << log(2) << "\n";

	// Условни конструкции if...else
	// Конструкция if
	if (20 > 18) {
		cout << "20 is bigger than 18" << "\n";
	}

	int x5 = 20;
	int y5 = 18;

	if (x5 > y5) {
		cout << "x5 is bigger than y5" << "\n";
	}

	// Използване на булева променлива
	bool isGreater = x5 > y5;

	if (isGreater) {
		cout << "x5 is greater than y5" << "\n";
	}

	// Конструкция else
	int time = 20;
	if (time < 18) {
		cout << "Добър ден." << "\n";
	}
	else {
		cout << "Добър вечер." << "\n";
	}

	// Конструкция else if
	int time1 = 16;

	if (time1 < 12) {
		cout << "Добро утро!" << "\n";
	}
	else if (time1 < 18) {
		cout << "Добър ден!" << "\n";
	}
	else {
		cout << "Добър вечер!" << "\n";
	}

	// Съкратен запис на if и else
	string result5 = (time < 12) ? "Добро утро" : (time < 18) ? "Добър ден" : "Добър вечер";
	cout << result5 << "\n";

	// Вложени if конструкции
	int x6 = 15;
	int y6 = 25;

	if (x6 > 10) {
		cout << "x6 is bigger than 10";

		if (y6 > 20) {
			cout << "y6 is bigger than 20";
		}
	}

	// Логически оператори

	// Логическо И &&
	int a1 = 200;
	int b1 = 33;
	int c1 = 500;

	if (a1 > b1 && c1 > a1) {
		cout << "И двете условия са истина";
	}

	// Логическо ИЛИ ||
	if (a1 > b1 || c1 > a1) {
		cout << "Поне едно условие е истина";
	}

	// Логическо НЕ
	if (!(a1 > b1)) {
		cout << " a1 is not bigger than b1" << "\n";
	}

	return 0;
}
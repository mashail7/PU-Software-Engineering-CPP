#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Извеждане на текст
	cout << "Hello, World!";

	// Извеждане на числа
	cout << 3;

	//Въвеждане на нов ред
	cout << "Hello World!\n"; // Вариант 1
	cout << "I am learning C++" << endl; // Вариант 2

	// Деклариране на променлива
	int number = 5;
	float pi = 3.14;
	string name = "Mihail";
	bool isTrue = true;
	char myLetter = 'M';

	// Присвояване на нова стойност на променливата
	int myNumber = 20;
	myNumber = 30;
	cout << myNumber << endl;

	// Извеждане на променливи
	cout << "Number: " << number << "\n" << "Name: " << name << endl;

	// Събиране на променливи
	int x = 5;
	int y = 10;
	int sum = x + y;

	cout << sum << endl;

	// Деклариране на няколко променливи
	int x1 = 5, y1 = 10, z1 = 15;
	cout << x1 + y1 + z1 << endl;

	// Задаване на стойност на няколко променливи
	int x2, y2, z2;
	x2 = y2 = z2 = 20;
	cout << x2 + y2 + z2 << endl;

	// Програма, която съхранява различни данни за студент
	// Данни за студента
	int studentId = 15;
	int studentAge = 23;
	double studentFee = 75.25;
	char studentGrade = 'B';

	// Извеждане на данните за студента
	cout << "Student ID is: " << studentId << endl;
	cout << "Student Age is: " << studentAge << endl;
	cout << "Student Fee is: " << studentFee << endl;
	cout << "Student Grade is: " << studentGrade << endl;

	// Програма за изчисляване на лицето на правоъгълник
	double length = 5.0;
	double width = 3.0;

	double area = length * width;

	cout << area << endl;

	// Прочитане на данни от потребителя
	string userName;
	cin >> userName;
	cout << userName << endl;

	// Създаване на калкулатор
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	int sum1 = num1 + num2;

	cout << "The sum of " << num1 << " and " << num2 << " is: " << sum1 << endl;

	// Създване на константи
	const double PI = 3.14159;

	// Създаване на променливи от различни типове
	int items;
	double costPerItem;
	double totalPrice;
	char currency = '$';

	cin >> items;
	cin >> costPerItem;
	totalPrice = items * costPerItem;

	cout << "Total price: " << totalPrice << currency << endl;


	return 0;
}
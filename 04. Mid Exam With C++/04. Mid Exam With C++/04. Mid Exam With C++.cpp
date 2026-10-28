#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
using namespace std;

void studentRefference() {
	int studentId = 21;
	double result = 99.1;
	char grade = '6';
	cout << "Идентификационен номер на студента: " << studentId << " Резултат: " << result << " Оценка: " << grade << endl;
}

void calculatingTotal() {
	int price = 5;
	int delivery = 3;
	int total_price = price * delivery;
	cout << "Общата стойност на артикула: " << total_price << endl;
}

void welcomeMessage() {
	string message = "Hello";
	cout << message << endl;
}

void ageVerification() {
	int age = 18;
	if (age >= 18) {
		cout << "Разрешено" << endl;
	}
	else cout << "Не е разрешено" << endl;
}

void clientOrder() {
	int drink = 1;

	switch (drink) {
		case 1:
			cout << "Поръчахте кафе!" << endl;
			break;
		case 2:
			cout << "Поръчахте чай!" << endl;
			break;
		default:
			cout << "Невалиден избор!" << endl;
	}
}

void countingWithWhile() {
	int counting = 1;
	while (counting <= 5) {
		cout << counting << endl;
		counting++;
	}
}

void countingWithFor() {
	int reverseCounting = 5;
	for (reverseCounting; reverseCounting >= 1; reverseCounting--) {
		cout << reverseCounting << endl;
	}
}

void userInteraction() {
	int sum = 0;
	int countOfNumbers = 0;
	while (true) {
		int number;
		cin >> number;
		countOfNumbers++;
		sum += number;
		if (number == 0 || countOfNumbers == 10) {
			cout << sum << endl;
			break;
		}
	}
}

void checkPassword() {
	while (true) {
		string password;
		cin >> password;
		if (password == "ai_health2026") {
			cout << "Достъп до системата за здравен мониторинг потвърден." << endl;
			break;
		}
		else cout << "Грешна парола, опитайте пак!" << endl;
	}
}

void userInput(int& heartRate, int& oxygenSaturation, int& hormonalBalance) {
	cin >> heartRate;
	cin >> oxygenSaturation;
	cin >> hormonalBalance;
}

void checkAndPrint(int heartRate, int oxygenSaturation, int hormonalBalance) {
	double average = (heartRate + oxygenSaturation + hormonalBalance) / 3;

	if (average < 45) {
		cout << "Внимание: критични стойности! Необходима е спешна реакция от специалист." << endl;
	}
	else if (average <= 74) {
		cout << "Умерени отклонения. Следете състоянието регулирано." << endl;
	}
	else {
		cout << "Стабилни сигнали. AI оценява състоянието като нормално." << endl;
	}
}

int main() {

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	studentRefference(); // зад.1 под.1

	calculatingTotal(); // зад.1 под.2

	welcomeMessage(); // зад.1 под.3

	ageVerification(); // зад.1 под.4

	clientOrder(); // зад.1 под.5

	countingWithWhile(); // зад.1 под.6

	countingWithFor(); // зад.1 под.7

	userInteraction(); // зад.2

	checkPassword(); // зад.3 под.1

	int heartRate = 0;
	int oxygenSaturation = 0;
	int hormonalBalance = 0;

	userInput(heartRate, oxygenSaturation, hormonalBalance); // зад.3 под.2

	checkAndPrint(heartRate, oxygenSaturation, hormonalBalance); // зад.3 под.3

	return 0;
}
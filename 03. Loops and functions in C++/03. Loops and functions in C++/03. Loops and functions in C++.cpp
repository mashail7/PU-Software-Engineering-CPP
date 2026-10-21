#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
using namespace std;

// Създаване на функция
void myFunction() {
	cout << "Функцията е изпълнена" << endl;
}

// Функцията може да приема параметри и да връща стойности
void myFunction2(string name) {
	cout << name << " Петрова" << endl;
}

// Функция с множество параметри
void myFunction3(string name, int age) {
	cout << name << " Петрова, е на " << age << " години." << endl;

}

// Функция, която удвоява числото, подадено като параметър
void doubleName(int number) {
	int result = number * 2;
	cout << "Удвоетаната стойност на числото " << number << " е " << result << endl;
}

int main() {

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	myFunction(); // Извикване на функцията

	string name = "Мария";
	myFunction2(name);
	int age = 18;
	myFunction3(name, age);

	// Конструкция switch
	// Използване на номера на деня за изваждане на името на деня от седмицата
	int day = 4;
	switch (day) {
	case 1:
		std::cout << "Понеделник" << std::endl;
		break;
	case 2:
		std::cout << "Вторник" << std::endl;
		break;
	case 3:
		std::cout << "Сряда" << std::endl;
		break;
	case 4:
		std::cout << "Четвъртък" << std::endl;
		break;
	case 5:
		std::cout << "Петък" << std::endl;
		break;
	case 6:
		std::cout << "Събота" << std::endl;
		break;
	case 7:
		std::cout << "Неделя" << std::endl;
		break;
		// Извежда четвъртък, защото day = 4
	}

	// Оператора break прекратява изпълнението на текущия блок switch и преминава към следващия ред код след него.
	// Ако не се използва break, програмата ще продължи да изпълнява следващите case блокове,
	// което може да доведе до нежелано поведение.

	// Опрератор default определя блок от код, който се изпулнява, ако не бъде намерено съвпадение с нито
	// един от case блоковете. Той е полезен за обработка на неочаквани стойности.

	switch (day) {
	case 6:
		std::cout << "Днес е събота" << std::endl;
		break;
	case 7:
		std::cout << "Днес е неделя" << std::endl;
		break;
	default:
		std::cout << "Невалиден ден от седмицата" << std::endl;
	}

	// Цикли в C++
	// Цикъл while
	int i = 0;
	while (i < 5) {
		std::cout << "Стойност на i: " << i << std::endl;
		i++;

	}

	// Пример за обратно броене с while цикъл
	int countdown = 5;
	while (countdown > 0) {
		std::cout << "Обратно броене: " << countdown << std::endl;
		countdown--;
	}

	// Цикъл do-while
	int i2 = 0;
	do {
		std::cout << "Стойност на i2: " << i2 << std::endl;
		i2++;
	} while (i2 < 5);

	// Условието на цикъла не е изпълнено още в началото, но тялото на цикъла се изпълнява поне веднъж.
	int i3 = 10;
	do {
		std::cout << "Стойност на i3: " << i3 << std::endl;
		i3++;
	} while (i3 < 5);

	// Пример: Въвеждане на стойност от потребителя
	// Многократно подканва потребителя да въведе положително число

	int number;
	do {
		cout << "Въведете положително число: ";
		cin >> number;
	} while (number <= 0);

	// Извеждане на четни числа от 0 до 10 включително
	int i4 = 0;
	while (i4 <= 10) {
		cout << i4 << "\n";
		i4 += 2;
	}

	// Цикъл while в комбинация с if...else
	int dice = 1;
	while (dice <= 6) {
		if (dice < 6) {
			cout << "Няма шестица" << "\n";
		}
		else {
			cout << "Шестица! победа!" << "\n";
		}
		dice++;
	}


	// Цикъл for в C++
	// Израз 1 се изпълнява едноратно, преди да започне изпълнението на цикъла.
	// Израз 2 определя условието за изпълнение на тялото на цикъла.
	// Израз 3 се изпълнява след всяко изпълнение на тялото на цикъла.
	for (int i = 0; i < 5; i++) {
		cout << "Стойност на i: " << i << endl;
	}

	// Извеждане на четни числа от 0 до 10 включително с for цикъл
	for (int i = 0; i <= 10; i += 2) {
		cout << i << "\n";
	}

	// Извеждане на нечетни числа от 1 до 9 включително с for цикъл
	for (int i = 1; i < 10; i += 2) {
		cout << i << "\n";
	}

	// Обратно броене
	for (int i = 5; i > 0; i--) {
		cout << i << "\n";
	}

	// Програма, която брои от 10 до 100 през 10
	for (int i = 10; i <= 100; i += 10) {
		cout << i << "\n";
	}

	// Извеждане на степените на числото 2 до 512 вкл.
	for (int i = 1; i <= 512; i *= 2) {
		cout << i << "\n";
	}

	// Програма, която извежда таблицата за умножение на дадено число
	int number1 = 2;
	int i5;

	for (i5 = 1; i5 < -10; i5++) {
		cout << number1 << " x " << i5 << " = " << number1 * i5 << "\n";
	}

	// Вложени цикли в C++
	// Външен цикъл
	for (int i = 1; i <= 2; i++) {
		cout << "Външен цикъл: " << i << "\n";
		// Вътрешен цикъл
		for (int j = 1; j <= 3; j++) {
			cout << "Вътрешен цикъл: " << j << "\n";
		}
	}

	// Таблица за умножение
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			cout << i * j << "\n";
		}
	}

	// Цикъл for-each в C++
	// Обхождане на масив с for-each цикъл
	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	for (int num : myNumbers) {
		cout << num << "\n";
	}

	// Обхождане на масив от низове с for-each цикъл
	string word = "Hello";
	for (char c : word) {
		cout << c << "\n";
	}

	// Оператори break и continue
	for (int i = 0; i < 10; i++) {
		if (i == 4) {
			break; // Прекъсва цикъла, когато i е равно на 4
		}
		cout << i << "\n";
	}

	for (int i = 0; i < 10; i++) {
		if (i == 4) {
			continue;
		}
		cout << i << "\n";
	}

	// Пример: Последователно удвояване на число пет пъти
	for (int i = 1; i <= 5; i++) {
		doubleName(i);
	}



	return 0;
}
#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
using namespace std;

// 1. Създаване на справка за студент
void displayStudentInfo() {
    int studentID = 12345;
    float score = 5.75f;
    char grade = 'A';

    cout << "Student ID: " << studentID << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
}

// 2. Изчисляване на общата стойност на артикул
void calculateTotalCost() {
    int itemPrice = 100;
    int shippingCost = 10;
    int sum = itemPrice + shippingCost;

    cout << "Total cost: " << sum << endl;
}

// 3. Създаване на поздравително съобщение
void displayGreeting() {
    string message = "Hello";
    message = "Hello";

    cout << message << endl;
}

// 4. Вземане на решение с if и else
void checkAge() {
    int age = 18;

    if (age >= 18) {
        cout << "Разрешено" << endl;
    }
    else {
        cout << "Не разрешено" << endl;
    }
}

// 5. Коригиране на клиентска поръчка
void processOrder() {
    int choice = 1;

    // 1 = Кафе
    // 2 = Чай

    switch (choice) {
    case 1:
        cout << "Ти поръча кафе" << endl;
        break;

    case 2:
        cout << "Ти поръча чай" << endl;
        break;

    default:
        cout << "Невалиден избор" << endl;
        break;
    }
}

// 6. Броене от 1 до 5 с while
void countWithWhile() {
    int i = 1;

    while (i <= 5) {
        cout << i << endl;
        i++;
    }
}

// 7. Броене от 1 до 5 с for
void countWithFor() {
    int i = 1;
    for (i = 1; i <= 5; i++) {
        cout << i << endl;
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    displayStudentInfo();
    cout << endl;

    calculateTotalCost();
    cout << endl;

    displayGreeting();
    cout << endl;

    checkAge();
    cout << endl;

    processOrder();
    cout << endl;

    countWithWhile();
    cout << endl;

    countWithFor();

    return 0;
}

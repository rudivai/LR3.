// Підключаємо стандартну бібліотеку вводу-виводу
#include <iostream>
// Використовуємо простір імен std
using namespace std; 

int main() {
    // Оголошуємо три цілочисельні змінні
    int a, b, c;

    // Виводимо запит на введення чисел
    cout << "Enter three integers: "; 
    // Зчитуємо три числа з введення
    cin >> a >> b >> c; 

    // Перевіряємо всі можливі комбінації, де одне число відрізняється від двох інших
    if (a != b && a == c) {
        cout << "Ordinal number of the perfect number: 1" << endl; // Якщо a відрізняється від b і дорівнює c
    }
    else if (b != a && b == c) {
        cout << "Ordinal number of the perfect number: 2" << endl; // Якщо b відрізняється від a і дорівнює c
    }
    else if (c != a && c == b) {
        cout << "Ordinal number of the perfect number: 3" << endl; // Якщо c відрізняється від a і дорівнює b
    }
    

    return 0; 
}









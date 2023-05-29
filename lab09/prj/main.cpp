#include <iostream>
#include <cstdlib>
#include <cctype>

// Функція для обробки введеного символу "j"
void s_calculation() {
    std::cout << "Виконується функція s_calculation()" << std::endl;
    // Додайте код для обчислення s_calculation() тут
}

// Функція для обробки введеного символу "z"
void z_function() {
    std::cout << "Виконується функція z_function()" << std::endl;
    // Додайте код для виконання функції задачі 9.1 тут
}

// Функція для обробки введеного символу "x"
void x_function() {
    std::cout << "Виконується функція x_function()" << std::endl;
    // Додайте код для виконання функції задачі 9.2 тут
}

// Функція для обробки введеного символу "c"
void c_function() {
    std::cout << "Виконується функція c_function()" << std::endl;
    // Додайте код для виконання функції задачі 9.3 тут
}

int main() {
    char input;
    while (true) {
        std::cout << "Введіть символ (j, z, x, c) або 'v' або 'V' або 'A' для виходу: ";
        std::cin >> input;
        input = std::tolower(input);
        
        if (input == 'j') {
            s_calculation();
        } else if (input == 'z') {
            z_function();
        } else if (input == 'x') {
            x_function();
        } else if (input == 'c') {
            c_function();
        } else if (input == 'v' || input == 'a') {
            std::cout << "Вихід з програми." << std::endl;
            break;
        } else {
            std::cout << "\a"; // Відтворення звукового сигналу про помилкове введення
        }
    }

    return 0;
}

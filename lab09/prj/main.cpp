#include <iostream>
#include <cstdlib>
#include <cctype>
#include <SEA_STATE_H.h>
#include <TEMPERATURE_CONVERSION_H.h>
#include <BIT_COUNT_H.h>
#include <MODULESBALYNSKYI_H.h>

int main() {
    char input;
    while (true) {
        std::cout << "Введіть символ (j, z, x, c) або 'v' або 'V' або 'A' для виходу: ";
        std::cin >> input;
        input = std::tolower(input);
        
        if (input == 'j') {
            s_calculation();
        } else if (input == 'z') {
           calculateSeaState();
        } else if (input == 'x') {
            fahrenheitToCelsius();
        } else if (input == 'c') {
            calculateResult();
        } else if (input == 'v' || input == 'a') {
            std::cout << "Вихід з програми." << std::endl;
            break;
        } else {
            std::cout << "\a"; // Відтворення звукового сигналу про помилкове введення
        }
    }

    return 0;
}

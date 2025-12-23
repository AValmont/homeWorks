#include <iostream>
#include <windows.h>
#include <string>

namespace Addition {
    int calc(int x, int y) {
        std::cout << "Сложение: " << x + y << std::endl;
        return 0;
    }
}
 
namespace Subtraction {
    int calc(int x, int y) {
        std::cout << "Вычитание: " << x - y << std::endl;
        return 0;
    }
}

namespace Multiplication {
    int calc(int x, int y) {
        std::cout << "Умножение: " << x * y << std::endl;
        return 0;
    }
}

namespace Division {
    int calc(int x, int y) {
        std::cout << "Деление: " << x / y << std::endl;
        return 0;
    }
}

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 7;
    int y = 5;

    std::cout << "x = 7, y = 5" << std::endl;
    Addition::calc(x, y);
    Subtraction::calc(x, y);
    Multiplication::calc(x, y);
    Division::calc(x, y);

    return 0;
}
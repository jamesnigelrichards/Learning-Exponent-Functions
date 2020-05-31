#include <iostream>

int expo(int base, int power){
    int result = 1;
    std::cout << "Enter base number: ";
    std::cin >> base;
    std::cout << "Raised to what power?";
    std::cin >> power;

    while (base < 0){
        base = -base;
    }

    for (int i = 0; i < power; i++) {
            result = result * base;
        }

    return result;
}

int main() {

    std::cout << expo(1, 1);

    return 0;
}

// main.cpp
#include <iostream>
#include "fibonacci.h"

int main() {
    int n;

    std::cout << "Enter the number of terms in the Fibonacci sequence: ";
    std::cin >> n;

    std::cout << "Fibonacci Sequence: ";
    for (int i = 0; i < n; ++i) {
        std::cout << calculateFibonacci(i) << " ";
    }

    std::cout << std::endl;

    return 0;
}

// fibonacci.cpp
#include "fibonacci.h"

int calculateFibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
    }
}

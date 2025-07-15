#include "fibonacci.hpp"
#include <iostream>

void print_fibonacci(int n) {
    if (n <= 0) {
        return;
    }

    long long a = 0, b = 1;

    std::cout << "Fibonacci sequence up to " << n << " terms:" << std::endl;

    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
}

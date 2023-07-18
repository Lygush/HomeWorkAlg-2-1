#include <iostream>

int Fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int number{};
    std::cin >> number;
    std::cout << Fibonacci(number);
}

// Алгоритмическая сложность = О(2^n)

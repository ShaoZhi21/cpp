#include <iostream>

constexpr int square(int x) {
    return x*x;
}

int main() {
    constexpr int a = square(5);

    int input = 7;
    const int b = square(input);

    std::cout << a << "\n";
    std::cout << b << "\n";
}
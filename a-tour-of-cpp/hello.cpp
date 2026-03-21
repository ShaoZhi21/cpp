#include <iostream>

// namespace needed to prevent function name clashing
// std refers to the standard cpp library

// std::cout is the object that represents terminal output
// << sends this to 
// "Hello, World" is what we send
// TLDR: send "Hello, World" to cout, cout then prints to terminal

// return_type function_name()
// argument types are checked during compile time

double square(double x) {
    return x*x;
}

void print_square(double x) {
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main() {
    std::cout << "Hello, World!\n";
    print_square(5);
}
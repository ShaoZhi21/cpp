#include <iostream>

int count_x(const char* p, char x) {
    if (p == nullptr) return 0;
    int count = 0;
    while (*p) {
        if (*p == x) ++count;
        ++p;
    }
    return count;
}

int main() {
    std::cout << count_x("abc", 'a') << "\n";
}
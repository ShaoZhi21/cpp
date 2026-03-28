#include <iostream>
using namespace std;

enum Type {str, num};

struct Entry {
    char* name;
    Type t;
    char* s;
    int i;
};

void f(Entry* p) {
    if (p->t == str) {
        std::cout << p->s;
    }
}

union Value {
    char* s;
    int i;
};

int main() {
    // test with a str entry
    Entry e1;
    e1.name = "test";
    e1.t = str;
    e1.s = "hello world";
    f(&e1);  // should print "hello world"

    cout << "\n";

    // test with a num entry (f won't print anything)
    Entry e2;
    e2.name = "test2";
    e2.t = num;
    e2.i = 42;
    f(&e2);  // prints nothing since t==num

    return 0;
}
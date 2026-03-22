#include <iostream>
using namespace std;

int main() {
    int n;
    std::cout << "enter number: ";
    cin >> n;
    if (n > 0) cout << "positive\n";
    else if (n < 0 ) cout << "negative\n";
    else cout << "zero\n";

    char g;
    cout << "enter your grade: \n";
    cin >> g;
    switch(g) {
        case 'A': cout << "Excellent \n";
        case 'B': cout << "Good\n";
        case 'C': cout << "Pass\n";      break;
        case 'F': cout << "Fail\n";      break;
        default:  cout << "Invalid\n";
    }

    int total = 0, x;
    while (true) {
        cout << "enter number(0 to stop): \n";
        cin >> x;
        if (x == 0) break;
        total += x;
    }
    cout << "sum: " << total << "\n";
}
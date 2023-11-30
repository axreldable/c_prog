#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    const int t = *a;
    *a = *b;
    *b = t;
}

void swap_link(int& a, int& b) {
    const int t = a;
    a = b;
    b = t;
}

int main() {
    int a = 1;
    int b = 2;

    cout << a << ' ' << b << '\n';
    swap(&a, &b);
    cout << a << ' ' << b << '\n';
    swap_link(a, b);
    cout << a << ' ' << b << '\n';
    return 0;
}

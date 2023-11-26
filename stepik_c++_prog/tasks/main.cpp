#include <iostream>

using namespace std;

void print_arr(int a[], unsigned size) {
    for (int i = 0; i < size; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void reverse(int a[], unsigned start, unsigned end) {
    while (start < end) {
        int t = a[start];
        a[start++] = a[end];
        a[end--] = t;
    }
}

void rotate(int a[], unsigned size, int shift) {
    reverse(a, 0, size - 1);
    reverse(a, 0, size - (shift % size) - 1);
    reverse(a, size - (shift % size), size - 1);
}


int main() {
    int x[5] = {1, 2, 3, 4, 5};

    print_arr(x, 5);
    rotate(x, 5, 2);
    print_arr(x, 5);
    return 0;
}

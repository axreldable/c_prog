#include <iostream>

using namespace std;

void print_arr(int a[], unsigned size) {
    for (int i = 0; i < size; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}


int main()
{
    int x[10] = {1, 2, 3, 4, 5};
    print_arr(x, 10);
    return 0;
}

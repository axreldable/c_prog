#include <iostream>


int power(int x, unsigned p) {
    if (p == 0) {
        return 1;
    }

    int answer = x;
    for (int i = 0; i < p - 1; ++i) {
        answer = answer * x;
    }
    return answer;
}

void max_func(int a, int b, int* c) {
    *c = a > b ? a : b;
}

#define MAX(x, y, r) {int a_ = (x); int b_ = (y); int c_ = (a_ > b_ ? a_ : b_); r = c_;}


int main() {
    int r, r1;
    max_func(2, 3, &r);
    MAX(2, 3, r1);

    std::cout << r << " vs " << r1 << "\n";
    int a = 10;
    int b = 20;
    int c;
    MAX(a, b, c); // теперь c равно 20
    std::cout << c << "\n";
    MAX(a += b, b, c); // теперь a = с = 30
    std::cout << c << "\n";

    return 0;
}

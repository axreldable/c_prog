#include <iostream>

using namespace std;

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

int log(int x) {
    int p = 0;
    int rez = 1;
    while (rez <= x) {
        rez = rez * 2;
        p += 1;
    }
    return p - 1;
}

unsigned gcd(unsigned a, unsigned b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    if (b > a) {
        return gcd(a, b % a);
    }
    return gcd(a % b, b);
}

void revert_input(int x) {
    int xx;
    cin >> xx;
    if (xx == 0) {
        cout << x << ' ';
        return;
    }
    revert_input(xx);
    cout << x << ' ';
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

unsigned strlen_1(const char *str)
{
    unsigned r = 0;
    while(*str != '\0') {
        str += 1;
        r += 1;
    }
    return r;
}

bool contains(int *m, int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (m[i] == value) {
            return true;
        }
    }
    return false;
}

bool contains(int *p, int *q, int value) {
    for ( ; p != q; ++p) {
        if (*p == value) {
            return true;
        }
    }
    return false;
}

int max(int *p, int *q) {
    int max = *p;
    for ( ; p != q; ++p) {
        if (*p > max) {
            max = *p;
        }
    }
    return max;
}

bool max(int *p, int *q, int *res) {
    if (p == q) {
        return false;
    }
    *res = *p;
    for ( ; p != q; ++p) {
        if (*p > *res) {
            *res = *p;
        }
    }
    return true;
}

bool max(int *p, int *q, int **res) {
    if (p == q) {
        return false;
    }
    *res = p;
    for ( ; p != q; ++p) {
        if (*p > **res) {
            *res = p;
        }
    }
    return true;
}

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

void print_arr(int a[], unsigned size) {
    for (int i = 0; i < size; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

unsigned strlen_1(const char* str) {
    unsigned r = 0;
    while (*str != '\0') {
        str += 1;
        r += 1;
    }
    return r;
}

void strcat_1(char* to, const char* from) {
    unsigned a = strlen_1(to);
    unsigned b = strlen_1(from);
    for (int i = 0; i < b; ++i) {
        to[a + i] = from[i];
    }
    to[a + b] = '\0';
}

bool is_the_same(const char* source, const char* pattern) {
    unsigned a = strlen_1(source);
    unsigned b = strlen_1(pattern);
    if (a < b) {
        return false;
    }
    for (int i = 0; i < b; ++i) {
        if (source[i] != pattern[i]) {
            return false;
        }
    }
    return true;
}

int strstr_1(const char* text, const char* pattern) {
    unsigned b = strlen_1(pattern);
    if (b == 0) {
        return 0;
    }
    unsigned a = strlen_1(text);
    for (int i = 0; i < a; ++i) {
        if (text[i] == pattern[0]) {
            if (is_the_same(&text[i], pattern)) {
                return i;
            }
        }
    }
    return -1;
}

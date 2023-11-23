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

unsigned gcd(unsigned a, unsigned b)
{
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

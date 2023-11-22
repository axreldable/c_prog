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

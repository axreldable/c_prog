#include <iostream>

using namespace std;

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

int main() {
    char first[] = "123456123";
    char second[] = "456";
    cout << is_the_same(first, second) << "\n";
    cout << is_the_same("456", second) << "\n";
    cout << strstr_1(first, second) << "\n";
    return 0;
}

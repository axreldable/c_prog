#include <iostream>

using namespace std;

void call(int x) {
    int xx;
    cin >> xx;
    if (xx == 0) {
        cout << x << ' ';
        return;
    }
    call(xx);
    cout << x << ' ';
}

int main()
{
    int x;
    cin >> x;
    call(x);
    return 0;
}

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;
    if (d < 0) {
        cout << "No real roots\n";
        return 0;
    }

    double x1 = (-b - sqrt(d)) / (2 * a);
    double x2 = (-b + sqrt(d)) / (2 * a);

    cout << x1 << " " << x2 << "\n";
    return 0;
}

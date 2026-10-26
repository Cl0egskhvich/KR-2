#include <iostream>
using namespace std;

int main() {
    long long a;
    int n;
    long long result = 1;

    cin >> a >> n;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= a;
        }

        a *= a;
        n /= 2;
    }

    cout << result;

    return 0;
}
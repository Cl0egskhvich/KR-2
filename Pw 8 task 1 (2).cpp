#include <iostream>
long long power(long long a, int n) {
    long long result = 1;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= a;
        }

        a *= a;
        n /= 2;
    }

    return result;
}
int main() {
    long long a;
    long long n;
    std::cin >> a >> n;
    std::cout << power(a,n) << std::endl;
    return 0;
}

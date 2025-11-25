// é¡???? 3ï¼???´è§£??¸å­¸å®¶ç??è¬?é¡? (Cracking the Mathematician's Puzzle) - 30???

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n/2; ++i) {
        if (isPrime(i)) {
            if (isPrime(n - i)) {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }

    return 0;
}

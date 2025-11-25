// é¡???? 2ï¼?å®?ç¾???ªç??è¨???? (The Perfect Tiling Project) - 20???

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    
    return 0;
}

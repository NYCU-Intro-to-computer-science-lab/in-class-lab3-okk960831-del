// é¡???? 4ï¼????è¿´ç??è¶³è·¡ (Footsteps of Recursion) - 30???

#include <iostream>
using namespace std;
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

void space(int n){
    cout<<"|";
    for(int i=n-1;i<n-i;i--){
        cout<<"--"<<endl;
    }
}

void recursion_tree(int n){
    if(n<=1) {
        return;
    }
    space(n);
    cout<<"SEARCH fib("<<n-1<<")"<<endl;
    space(n);
    cout<<"GET fib("<<n-1<<") = "<<fib(n-1)<<endl;
    recursion_tree(n-1);
    recursion_tree (n-2);

}

int main() {
    int n;
    cin >> n;
    cout << "SEARCH fib("<<n<<")" << endl;
    recursion_tree(n);
    cout << "GET fib("<<n<<") = " << fib(n) << endl;
    cout << fib(n) << endl;
    return 0;
}

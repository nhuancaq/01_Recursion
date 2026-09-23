#include <iostream>
using namespace std;

void decimalABinario(int n);

int main() {
    int n = 13;
    decimalABinario(n);
    cout << endl;
    return 0;
}

void decimalABinario(int n) {
    if (n > 1) {
        decimalABinario(n / 2);
    }
    cout << n % 2;
}
#include <iostream>

using namespace std;

/**
 * Return the nth Fibonacci number
 */
int Fib(int n) {
    // Base case
    if (n == 1) return 0;
    if (n == 2) return 1;

    // Recurive call
    return Fib(n-1) + Fib(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << Fib(n) << endl;
}


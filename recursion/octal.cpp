#include <iostream>
using namespace std;

void octal(int n) {
    if (n > 0) {
        if (n/8 > 0) {
            octal(n/8);
        }
        cout << n%8;
    }
}

int main() 
{
    int n;
    cin >> n;
    octal(n);
    cout << endl;
}


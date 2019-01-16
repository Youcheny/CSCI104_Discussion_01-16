#include <iostream>
using namespace std;

int bsh(int* A, int target, int start, int end) 
{
    int index;
    if (start > end) {
        index = -1; // Cannot find target
    }

    else {
        int mid = start + (end - start) / 2;
        if (A[mid] == target) {
            index = mid;
        } else if (A[mid] > target) {
            index = bsh(A, target, start, mid-1);
        } else { // A[mid] < target
            index = bsh(A, target, mid+1, end);
        }
    }

    return index;
}

int binary_search(int* A, int target, int size) 
{
    return bsh(A, target, 0, size-1);
}

int main()
{
    int n;
    cin >> n;

    int* A = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int t;
    cin >> t;
    cout << binary_search(A, t, n);
}


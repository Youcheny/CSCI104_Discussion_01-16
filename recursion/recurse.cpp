#include <iostream>
using namespace std;

void recurse(int& x, int& y)
{
    if (y > 0)
    {
        x++;
        y--;
        cout << x << " " << y << endl;
        recurse(x, y);
        cout << x << " " << y << endl;
    } // end if
} // end recurse    

int main() {
    int x = 5;
    int y = 3;
    recurse(x,y);
}
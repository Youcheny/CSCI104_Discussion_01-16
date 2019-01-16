#include <iostream>
using namespace std;

void solveTowers(int disc, char src, char dst, char alt);

int main()
{
  solveTowers(3,'a','b','c');
  return 0;
}

void solveTowers(int disc, char src, char dst, char alt)
{
    if (disc == 1) {
      cout << "Move disc 1 from " << src << " to " << dst << endl;
      return;
    }
    
    solveTowers(disc-1, src, alt, dst);
    cout << "Move disc " << disc << " from " << src << " to " << dst << endl;
    solveTowers(disc-1, alt, dst, src);



}

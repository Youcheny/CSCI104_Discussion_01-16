#include <iostream>
#include <vector>
#include <string>

using namespace std;

/** You are a cashier at your local supermarket and at one point in your career you begin to wonder a question...
	*	Given a set of bills (like {$1, $5, $10, $20, $50, $100}) and an amount of change I need to give a customer,
	* how many different change combinations can you provide, assuming you have an infinite number of bills of each value? 
	* For example, to give a change of $15, you can have 6 combinations to form this change:
	* $1 * 15 = $15
	* $5 * 1 + $1 * 10 = $15
	* $5 * 2 + $1 * 5 = $15
	* $5 * 3 = $15
	* $10 * 1 + $1 * 5 = $15
	* $10 * 1 + $5 * 1 = $15
 	*/

int countCoinCombinations(int change, vector<int>& bills);
int countCoinCombinationsHelper(int change, vector<int>& bills, int curr); 
// The above helper function may be helpful but is not required, you can choose to use it or define your own

int countCoinCombinations(int change, vector<int>& bills) {
	// TODO
}

int main() {
	vector<int> bills = {1, 5, 10, 20, 50, 100};
	cout << countCoinCombinations(15, bills) << endl;

}
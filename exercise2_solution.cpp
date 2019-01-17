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

int countCoinCombinations(int change, vector<int>& bills) {
	return countCoinCombinationsHelper(change, bills, 0);
}

int countCoinCombinationsHelper(int change, vector<int>& bills, int curr) {
	if ((unsigned)curr == bills.size()) {
		if (change == 0)
			return 1;
		else return 0;
	}
	int combinationsCount = 0;
	for (int i=0; i<=change / bills[curr]; ++i)
		combinationsCount += countCoinCombinationsHelper(change - i * bills[curr], bills, curr + 1);
	return combinationsCount;
}

int main() {
	vector<int> bills = {1, 5, 10, 20, 50, 100};
	cout << countCoinCombinations(200, bills) << endl;
	
}
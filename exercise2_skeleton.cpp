#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string* readFile(const string& filename) {
	// TO DO
}

void coutFile(string* arr) {
	for (int i=0; arr[i] != "END"; ++i) {
		cout << arr[i] << endl;
	}
}

void deallocate(string* arr) {
	// TO DO
}

int main() {
	string* arr = readFile("test.in");
	coutFile(arr);
	deallocate(arr);
}
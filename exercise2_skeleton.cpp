#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string* readFile(const string& filename) {
	// TO DO
	ifstream iss(filename.c_str());
	string line;
	string* arr = NULL;
	int size = 0;
	while (getline(iss, line)) {
		if (arr == NULL) {
			// TODO
		}
		else {
			// TODO
		}
		++size;
	}
	return arr;
}

void coutFile(string* arr) {
	for (int i=0; arr[i] != "END"; ++i) {
		cout << arr[i] << endl;
	}
}

void deallocate(string* arr) {
	delete [] arr;
}

int main() {
	string* arr = readFile("test.in");
	coutFile(arr);
	deallocate(arr);
}
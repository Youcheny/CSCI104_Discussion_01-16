#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string* readFile(const string& filename) {
	ifstream iss(filename.c_str());
	string line;
	string* arr = NULL;
	int size = 0;
	while (getline(iss, line)) {
		if (arr == NULL) {
			// TODO: allocate an array of size 1
		}
		else {
			// TODO: increase the array size by 1 push line to the back of the array
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
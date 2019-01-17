#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/** Given a text file, read every line of it into a dynamically allocated string* array
	* While reading, you will need to expand the size of your string* array on the fly as you don't know how many lines there will be in total
	* You will implement two parts in the code, marked by // TODO
	* If your implementation is correct, the program will print out a poem from Shakespeare's play, Hamlet.
	*/

string* readFile(const string& filename) {
	ifstream iss(filename.c_str());
	string line;
	string* arr = NULL;
	int size = 0;
	while (getline(iss, line)) {
		if (arr == NULL) {
			// TODO: allocate an array of size 1
      arr = new string[1];
      arr[0] = line;
		}
		else {
			// TODO: increase the array size by 1 push line to the back of the array
      string* newarr = new string[size + 1];
      for (int i=0; i<size; ++i)
          newarr[i] = arr[i];
      newarr[size] = line;
      delete [] arr;
      arr = newarr;
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


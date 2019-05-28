#include <fstream>
#include <iostream>

using namespace std;

int main() {
	char mars[50];
	ifstream fin("enter.txt");
	while (!fin.eof()) {
		fin >> mars;
		cout << mars << endl;
	}
	fin.close();
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int nInput, mInput;

	cin >> nInput >> mInput;

	for (int i = 1; i <= nInput; i++) {
		for (int j = 1; j <= mInput; j++) {
			cout << i << ' ' << j << endl;
		}
	}
}
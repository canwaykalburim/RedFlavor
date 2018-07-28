#include <iostream>
using namespace std;

int main(void) {
	int nInput = 0;

	cin >> nInput;

	if ((nInput >= 50 && nInput <= 70) || (nInput % 6 == 0)) {
		cout << "win";
	}
	else
		cout << "lose";

	return 0;
}
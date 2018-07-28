#include <iostream>
using namespace std;

int main(void) {
	float nInput = 0;

	cin >> nInput;

	if ((nInput >= 30 && nInput <= 40) || (nInput >= 60 && nInput <= 70)) {
		cout << "win";
	}
	else
		cout << "lose";

	return 0;
}
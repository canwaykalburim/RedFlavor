#include <iostream>

int main(void) {
	float nInput = 0;

	std :: cin >> nInput;

	if (nInput <= 60.000 && nInput >= 50.000) {
		std :: cout << "win";
	}
	else
		std :: cout << "lose";

	return 0;
}
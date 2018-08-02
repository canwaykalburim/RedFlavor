#include <iostream>
using namespace std;

//	Baekjoon 15552번 문제 c++ 버전

void FastPlusCPP() {
	int nNum, nInput, mInput;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> nNum;

	for (int i = 0; i < nNum; i++) {
		cin >> nInput >> mInput;

		cout << nInput + mInput << '\n';
	}
}
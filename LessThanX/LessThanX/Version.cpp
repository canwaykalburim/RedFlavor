#include <iostream>
using namespace std;

//BaekJoon 10871�� ���� C++����

void ThirdP() {
	int nInput, nNum;

	cin >> nInput >> nNum;
	int *arr = new int[nInput];

	for (int i = 0; i < nInput; i++)
	{
		cin >> arr[i];
		if (nNum > arr[i])
			cout << arr[i] << " ";
	}
}

int main() {
	ThirdP();
}
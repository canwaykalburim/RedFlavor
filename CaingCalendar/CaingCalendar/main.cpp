#include <iostream>
using namespace std;

// BaekJoon 6064�� ����

int Least(int m, int n) {
	int a = m, b = n, tmp;
	while (b) {
		tmp = a;
		a = b;
		b = tmp % b;
	}
	return (m * n) / a;
}

int main(void) {
	int tmp, m, n, x, y;
	cin >> tmp;

	for (int i = 0; i < tmp; i++) {
		cin >> m; cin >> n; cin >> x; cin >> y;
		int LNum = Least(m, n);
		while (x != y && x <= LNum) {
			if (x < y) x += m;
			else y += n;
		}
		if (x != y) {
			cout << "-1" << endl;
		}
		else {
			cout << x << endl;
		}
	}
	return 0;
}
#include <stdio.h>

//BaekJoon 10871�� ���� C����

//�Է��� ���� �� ��� (Ʋ�� ����)
void FirstP() {
	int nInput, std, nNum, tmp[10001];

	scanf("%d %d", &nInput, &std);

	for (int i = 0; i < nInput; i++) {
		scanf("%d", &nNum);
		if (nNum < std) {
			tmp[i] = nNum;
		}
	}
	for (int i = 0; i < nInput; i++) {
		if (tmp[i] > 0) {
			printf("%d ", tmp[i]);
		}
	}
}

//�Է��� ���ڸ��� ��� (�ùٸ� ����)
void SecondP() {
	int nInput, std, nNum;

	scanf("%d %d", &nInput, &std);

	for (int i = 0; i < nInput; i++) {
		scanf("%d", &nNum);
		if (nNum < std) {
			printf("%d ", nNum);
		}
	}
}

int main(void) {
	//FirstP();
	//SecondP();
}
#include <stdio.h>

// 포인터 배열
void PointerArr(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	int *arr[3] = { &num1, &num2, &num3 };

	printf("%x %d\n", arr[0], *arr[0]);
	printf("%x %d\n", arr[1], *arr[1]);
	printf("%x %d", arr[2], *arr[2]);
}

// 2차원 배열의 sizeof 연산
void PointerSize() {
	int arr[2][3] = { 10,20,30,40,50,60 };

	printf("%d %d %d\n", sizeof(arr), sizeof(arr[0]), sizeof(arr[1]));
	printf("%d %d %d", sizeof(arr[0][0]), sizeof(arr[1][0]), sizeof(&arr[0][0]));
}

// 2차원 배열의 포인터 연산
void PointerCalculate() {
	int arr[2][3] = { 10,20,30,40,50,60 };

	printf("%x\n", arr);
	printf("%x %x %x\n", arr + 1, arr[0] + 1, arr[1] + 1);
	printf("%x %x %x\n", arr + 1, arr[0] + 2, arr[1] + 2);
	printf("%x %x %x", arr + 1, arr[0] + 3, arr[1] + 3);
}

void PointerCalculate2() {
	int arr[2][3] = { 10,20,30,40,50,60 };

	printf("%d %d %d\n", arr[0][0], *arr[0], **arr);
	printf("%d %d %d", arr[1][0], *arr[1], **(arr + 1));
}

int main(void) {
	//PointerArr();
	//PointerSize();
	//PointerCalculate();
	//PointerCalculate2();
	return 0;
}
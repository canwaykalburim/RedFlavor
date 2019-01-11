#include <iostream>
using namespace std;

// baekjoon 10039¹ø ¹®Á¦

int main(void)
{
	int score[5], sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> score[i];

		if (score[i] < 40) 
		{
			score[i] = 40;
		}
		sum += score[i];
	}
	cout << sum / 5;
}
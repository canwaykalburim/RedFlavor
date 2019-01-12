#include <iostream>
#include <cstring>
using namespace std;

// baekjoon 10809¹ø ¹®Á¦ 

int main(void)
{
	char word[100] = { 0 };
	int alpha[26] = { 0 };

	cin >> word;

	int len = strlen(word);

	for (int i = 0; i < 26; i++)
	{
		int cnt = 0;
		for (int j = 0; j < len; j++)
		{
			if (word[j] != ('a' + i))
			{
				cnt++;
			}
			else
				break;
		}
		if (cnt + 1 > len)
		{
			alpha[i] = -1;
		}
		else
			alpha[i] = cnt;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << " ";
	}
}
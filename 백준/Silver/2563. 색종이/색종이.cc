#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main()
{
	int squareW[100][100] = { 0 };
	int num_bs, x, y, area = 0;

	scanf("%d", &num_bs);
	for (int i = 0; i < num_bs; i++)
	{
		scanf("%d %d", &x, &y);

		for (int k = y; k < y + 10; k++) {
			for (int l = x; l < x + 10; l++) {
				squareW[k][l] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (squareW[i][j] == 1)
				area++;
		}
	}

	printf("%d\n", area);
}
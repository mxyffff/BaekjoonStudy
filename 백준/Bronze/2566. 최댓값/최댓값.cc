#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> matrix(9, vector<int>(9));
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> matrix[i][j];

	int max = matrix[0][0];
	int r = 0, c = 0;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
				r = i;
				c = j;
			}

	cout << max << endl << r + 1 << " " << c + 1;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector <int>> matrix1(n, vector<int>(m));
	vector<vector <int>> matrix2(n, vector<int>(m));
	vector<vector <int>> matrix3(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix2[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> words(5);
	vector<vector <char>> words_2d(5, vector<char> (15, '*'));
	string sentence;

	for (int i = 0; i < 5; i++)
		cin >> words[i];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < words[i].size(); j++)
			words_2d[i][j] = words[i][j];
			
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++)
			if (words_2d[j][i] != '*')
				sentence += words_2d[j][i];
	
	cout << sentence;
}
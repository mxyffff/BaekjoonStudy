#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> words(5);
	string sentence;

	for (int i = 0; i < 5; i++)
		cin >> words[i];

	size_t max_length = 0;
	for (const string& word : words)
	{
		if (word.size() > max_length)
			max_length = word.size();
	}

	for (size_t i = 0; i < max_length; i++)
		for (size_t j = 0; j < 5; j++)
		{
			if (i < words[j].size())
				sentence += words[j][i];
		}

	cout << sentence;
}
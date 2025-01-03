#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int gWords = 0;
	bool isgroup = true;
	int n;
	cin >> n;

	vector<string> words(n);
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int l = 0; l < words[i].size(); l++)
		{
			for (int j = l + 1; j < words[i].size(); j++)
			{
				if (words[i][l] == words[i][j])
				{
					if (words[i][j - 1] != words[i][j])
					{
						isgroup = false;
					}
				}
			}
		}
		if (isgroup)
		{
			gWords += 1;
		}
		isgroup = true;
	}

	cout << gWords << endl;
    
    return 0;
}
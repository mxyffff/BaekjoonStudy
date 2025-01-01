#include <iostream>
#include <string>
using namespace std;

int main() {
	string croatia[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	string word;
	cin >> word;

	for (int i = 0; i < 8; i++)
	{
		size_t pos = word.find(croatia[i]);
		while (pos != string::npos)
		{
			word.replace(pos, croatia[i].length(), "*");
			pos = word.find(croatia[i], pos + 1);
		}
	}

	cout << word.length() << endl;

	return 0;
}
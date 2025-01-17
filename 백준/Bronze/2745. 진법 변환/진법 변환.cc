#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string n;
	int b;
	cin >> n >> b;

	int res = 0;
	for (int i = 0; i < n.size(); i++)
	{
		int index = n.size() - 1 - i;
		int num = 0; // string타입 문자를 int타입으로 변환했을 때 저장할 변수

		// 아스키코드를 숫자로 변환
		// '0' == 48, 'A' == 65, 'a' == 97
		if (n[index] <= '9') 
			num = n[index] - '0'; 
		else 
			num = n[index] - 'A' + 10; // 11진법부터 10 == A
		
		res += (int)pow(b, i) * num;
	}

	cout << res;
}
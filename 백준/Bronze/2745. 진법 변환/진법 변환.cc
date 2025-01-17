#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string n;
	int b;
	cin >> n >> b;

	int res = 0, base = 1;

	// 문자열 n을 역순으로 처리
	for (int i = n.size() - 1; i >= 0; --i)
	{
		int num = isdigit(n[i]) ? (n[i] - '0') : (n[i] - 'A' + 10);
		res += num * base;
		base *= b;
	}

	cout << res;
}
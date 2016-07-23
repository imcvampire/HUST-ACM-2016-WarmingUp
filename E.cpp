#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int n, k;
		cin >> n >> k;

		int ans = 1;
		for (int j = 1; j <= n; ++j)
		{
			ans += (j + k);
			while (ans > n)
				ans -= n;
		}
		cout << n << endl;
	}
	return 0;
}
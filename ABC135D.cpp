#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, n0, n) for (int i = n0; i < n; i++)
#define Com(i, j, n)              \
	for (int i = 0; i < n - 1; i++) \
		for (int j = i + 1; j < n; j++)
#define INF (1 << 29)

int main()
{
	int MOD = 1000000007;
	string hoge = "";
	cin >> hoge;
	int l = hoge.size();
	int dp[l+1][13] = {0};
	int dma[] = {1, 10, 9, 12, 3, 4};
	dp[0][0] = 1;
	char hatena = '?';
	int x = 0;
	int y = 0;
	int m = 13;
	rep(i, l) {
		x = dma[(l-1-i)%6];
		if(int(hoge[i]) == int(hatena)) {
			rep(k, 10) {
				rep(j, 13) {
					dp[i+1][j] = (dp[i+1][j] + dp[i][(j+k*x)%m])%MOD;
				}
			}
		} else {
			y = int(hoge[i] - '0');
			rep(j, 13){
				dp[i+1][j] = (dp[i+1][j] + dp[i][(j+y*x)%m])%MOD;
			}
		}
	}
	cout << dp[l][8] << endl;
	return 0;
}

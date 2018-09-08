#include <bits/stdc++.h>
 
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n0,n) for(int i=n0;i<n;i++)
#define Com(i,j,n) for(int i=0;i<n-1;i++)for(int j=i+1;j<n;j++)
const int INF =100100100;
const int MOD = (int)1e9+7;
const double EPS = 1e-9;
typedef long long ll;
typedef long li;
#define pb push_back 
#define mp make_pair

signed main (){	
	int HH,WW;
	cin >> HH >> WW;
	int temp;
	queue < pair <int,int> > ans ; //答え
	bool used[HH][WW]; // コイン移動の始点になったます
	bool tables[HH][WW]; //コインのあるます
	rep(i,HH){
		rep(j,WW){
			used[i][j] = false;
			cin >> temp;
			if(temp%2==0){
				tables[i][j]=false;
			}
			else{
				tables[i][j]=true;
			}
		}
	}
	pair <int,int> temps;
	rep(i,HH){
		rep(j,WW){
			if(j==WW -1) continue;
			else if(tables[i][j]==true){
				tables[i][j+1] = !(tables[i][j+1]);
				ans.push(mp(i,j));
			}
		}
	}
	rep(i,HH){
		if(i== HH-1) break;
		else if(tables[i][WW-1]==true){
			tables[i+1][WW-1] = !(tables[i+1][WW-1]);
			ans.push(mp(i,WW-1));
		}
	}
	cout << ans.size() << endl;
	while(ans.size()!=0){
		temps = ans.front();
		ans.pop();
		if(temps.second==WW-1){
			cout << temps.first+1 << " " << temps.second+1 << " " << temps.first+1+1 << " " << temps.second+1 <<endl;
		}
		else{
			cout << temps.first+1 << " " << temps.second+1 << " " << temps.first+1 << " " << temps.second+1+1 <<endl;	
		}
	}
	return 0;
}

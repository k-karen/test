#include <stack>
#include <queue>
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string>
 
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n0,n) for(int i=n0;i<n;i++)
#define Com(i,j,n) for(int i=0;i<n-1;i++)for(int j=i+1;j<n;j++)
#define INF (1<<29)

int main (){
	int NN,MM;
	cin >> NN >> MM;
	int tempa,tempb;
	int temp;
	pair<int,int> temppair;
	vector <pair< int , int > > cuts;
	rep(i,MM){
		cin >> tempa >> tempb;
		if(tempa>tempb){
			temp = tempa;
			tempa = tempb;
			tempb = temp;
		}
		temppair = make_pair(tempa,tempb);
		cuts.push_back(temppair);
	}
	sort(cuts.begin(),cuts.end());

	int ff = cuts[0].first;
	int fb = cuts[0].second;
	int ans = 0;
	rep(i,MM){
		if(cuts[i].first == ff)	{
			continue;
		}
		if( fb <= cuts[i].first ){
			ff = cuts[i].first;
			fb = cuts[i].second;
			ans ++;
		}
		if( fb > cuts[i].second ){
			fb = cuts[i].second;
		}
	}
	cout << ans+1 << endl;

	return 0;

}

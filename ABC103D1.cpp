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

int max(int a,int b){return (a<b)? b:a;}
int min(int a,int b){return (a!=0 && a<b)? a:b;}
int main (){
	int NN,MM,tempa,tempb,ans=1;
	cin >> NN >> MM;
	int tt[100005]={0};
	rep(i,MM){
		cin >> tempa >> tempb;
		tt[min(tempa,tempb)] = min(tt[min(tempa,tempb)],max(tempb,tempa));
	}
	vector <pair <int ,int > > ttt;
	rep(i,NN)if(tt[i]!=0)ttt.push_back(make_pair(i,tt[i]));
	int ff = ttt[0].first;
	int fb = ttt[0].second;
	rep(i,ttt.size()){
		if( fb <= ttt[i].first ){ff = ttt[i].first;fb = ttt[i].second;ans ++;}
		if( fb > ttt[i].second ){fb = ttt[i].second;}
	}
	cout << ans << endl;
	return 0;

}

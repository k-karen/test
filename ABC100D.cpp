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

long long max(long long a,long long b){
	return (a>b)? a:b;
}
int main (){
	long long NNN,MMM,maxx=0,p=0,sum=0;
	cin >> NNN >> MMM;
	long long a[3][NNN];
	rep(i,NNN){rep(j,3){scanf("%lld",&a[j][i]);}}
	vector <long long> temp[8];
	rep(i,8){
		rep(j,NNN){
			rep(k,3)(i & (1 << k))? p += a[k][j]:p -= a[k][j];
			temp[i].push_back(p);
			p=0;
		}
		sort(temp[i].rbegin(),temp[i].rend());
		sum=0;
		rep(k,MMM)sum += temp[i][k];
		maxx = max(sum,maxx);
	}
	printf("%lld",maxx);

	return 0;
}

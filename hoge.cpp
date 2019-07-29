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
const int INF =100100100;
const int MOD = (int)1e9+7;
const double EPS = 1e-9;
typedef long long ll;
typedef long li;
#define pb push_back 
#define mp make_pair

signed main (){	
	int XX,YY,ZZ,KK;
	ll t;
	vector <ll> x,y,z,all;
	cin >> XX >> YY >> ZZ >> KK ;
	rep(i,XX){
		cin >> t;
		x.pb(t);
	}
	rep(i,YY){
		cin >> t;
		y.pb(t);
	}
	rep(i,ZZ){
		cin >> t;
		z.pb(t)
	}
	sort(x.rbegin(),x.rend());
	sort(y.rbegin(),y.rend());
	sort(z.rbegin(),z.rend());

	rep(i,XX){
		rep(j,YY){
			rep(k,ZZ){
				if(i*j*k > KK) {
					break;
				} else {
					all.pb(x[i]+y[j]+z[k]);
				}
			}
		}
	}
	sort(all.rbegin(),all.rend());
	rep(i,KK){
		cout << all[i] << endl;
	}
	return 0;
}

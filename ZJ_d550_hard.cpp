#include<bits/stdc++.h>
using namespace std;
#define push emplace
#define endl '\n'
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rep0(i,n) rep(i,0,n)
#define rep1(i,n) rep(i,1,n+1)

vector<vector<int> >v;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, m, in;
	cin>>n>>m;
	rep0(i,n) {
		vector<int>add;
		rep0(j,m) {
			cin>>in;
			add.push_back(in);
		}
		v.push_back(add);
	}
	sort(v.begin(), v.end(), [](vector<int> va, vector<int> vb) {
		for(int i=0;i<va.size();++i) {
			if(va[i] != vb[i]) return va[i]<vb[i];
		}	
		return true;
	});
	rep0(i,n) {
		rep0(j,m) {
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

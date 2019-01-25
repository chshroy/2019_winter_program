#include <bits/stdc++.h>
using namespace std;
const int N = 2000000 + 5;
#define Hash(i, j) ((i)*(m+1)+(j))

bool mtx[N];
int preH[N], preZ[N];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n, m; cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mtx[Hash(i, j)];
			if(mtx[Hash(i, j)] and mtx[Hash(i, j-1)]) preH[Hash(i, j)]++;
			if(mtx[Hash(i, j)] and mtx[Hash(i-1, j)]) preZ[Hash(i, j)]++;
			preH[Hash(i, j)]+=preH[Hash(i, j-1)];
			preZ[Hash(i, j)]+=preZ[Hash(i-1, j)];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			preH[Hash(i, j)]+=preH[Hash(i-1, j)];
			preZ[Hash(i, j)]+=preZ[Hash(i, j-1)];
		}
	}
	int q; cin>>q;
	while(q--){
		int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
		cout<<(preZ[Hash(x2, y2)]+preZ[Hash(x1, y1-1)]-preZ[Hash(x1, y2)]-preZ[Hash(x2, y1-1)] + \
			preH[Hash(x2, y2)]+preH[Hash(x1-1, y1)]-preH[Hash(x1-1, y2)]-preH[Hash(x2, y1)])<<'\n';
	}
	return 0;
}

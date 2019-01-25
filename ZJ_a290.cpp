#include<iostream>
#include<cstring>
using namespace std;

int mp[805][805];
int visit[805];

int n, m;

void dfs(int pos)
{
	if(visit[pos]==1) return;
	visit[pos]=1;

	for(int i=1;i<=n;i++)
		if(mp[pos][i]==1) dfs(i);
}
int main(){
	//輸入優化 沒優化好像不會過
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a, b, A, B;
	while(cin>>n>>m)
	{
		//初始化
		memset(mp,0,sizeof(mp));
		memset(visit,0,sizeof(visit));

		while(m--)
		{
			cin>>a>>b;
			mp[a][b]=1; 	//a可以到b 但注意b不可以到a	
		}

		cin>>A>>B;
		dfs(A);

		if(visit[B]==1) cout<<"Yes!!!\n";
		else cout<<"No!!!\n";	
	}
}

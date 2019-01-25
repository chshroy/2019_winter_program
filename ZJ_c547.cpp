#include<bits/stdc++.h>
using namespace std;


int main() {
	long long f[10005]={1,1,2};
	for(int i=3;i<=10004;i++) 
		f[i]=(f[i-1]+f[i-2])%1000000007;
	int n;
	while(cin>>n) cout<<f[n]<<endl;
}

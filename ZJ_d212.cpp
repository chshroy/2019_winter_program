#include<iostream>
#include<cstring>
using namespace std;

const int maxn = 5005;
unsigned long long dp[maxn];

unsigned long long f(int n) {
	if(n <=1) return 1;
	if(dp[n]!=0) return dp[n];
	dp[n] = f(n-1)+f(n-2);
	return dp[n];
}

int main() {
	int a;
	memset(dp,0,sizeof(dp)); //init
	while(cin>>a) cout<<f(a)<<endl;
}

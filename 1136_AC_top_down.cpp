#include<iostream>
using namespace std;

int dp[100005];
int mod = 1e9+7;

int f(int n) {
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(dp[n]) return dp[n];
	return dp[n] = (f(n-1) + f(n-2))%mod;
}

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		cout<<f(n)<<endl;
	}
}

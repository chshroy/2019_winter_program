#include<iostream>
using namespace std;

int dp[100005] = {0,1,2};
int mod = 1e9+7;

int main() {
	for(int i=3;i<=100000;i++) 
		dp[i] = (dp[i-1]+dp[i-2])%1000000007;
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		cout<<dp[n]<<'\n';
	}
}

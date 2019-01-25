#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int mod = 10007;

long long po(int a,int b) {  //2 31
	if(b==1) return a;
	long long n=po(a,b/2);  //2 15
	return b%2 == 0 ? (n*n)%mod : (n*n*a)%mod;
}

int main() {
	long long a,b;
	while(cin>>a>>b) {
		cout<<po(a,b)%10007<<endl;
	}
}

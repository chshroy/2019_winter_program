#include<iostream>
using namespace std;

int n, p, b;

long long f(int a, int k) {
	if(k == 0) return 1;
	long long n = f(a, k/2);
	return (k%2 == 0) ? (n*n)%b : (n*n*a)%b;
}

int main() {
	
	while(cin>>n>>p>>b) {
		cout<<f(n, p)<<endl;
	}
}

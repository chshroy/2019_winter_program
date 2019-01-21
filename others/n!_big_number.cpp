//n! 
#include<iostream>
using namespace std;

int main() {
	int a[100]={1}, n, digit = 1;
	cin>>n;
	for(int k=2;k<=n;k++) {
		//每個位數都*k 
		for(int i=0;i<digit;i++) a[i] *= k; 
		for(int i=0;i<digit;i++) {
			a[i+1] += a[i]/10;
			a[i] %= 10;
		} 
		//進位 
		while(a[digit] >= 10) {
			a[digit+1] += a[digit]/10;
			a[digit] %= 10; 
			digit++;
		}
		if(a[digit]) digit++;
		for(int i=digit-1;i>=0;i--) cout<<a[i];
		cout<<endl;
	}
}

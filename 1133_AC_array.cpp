#include<iostream>
using namespace std;

int array[500005] = {0};
int main() {
	int n, q, a, cnt = 0;
	cin>>n;
	while(n--) {
		cin>>q>>a;
		if(q == 1) array[cnt++] = a;
		else if(q == 2) cnt-=a;
		else cout<<array[a]<<endl;
	}
}

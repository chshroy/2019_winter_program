#include<iostream>
#include<vector>
using namespace std;
int a[100005];

int main() {
	int n,k,in;
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(k--) {
		cin>>in;
		int l = 1, r = n;
		while(l<r) {
			int mid = (l+r)/2;
			if(a[mid]<in) l = mid+1;
			else r = mid;
		}
		if(a[l] == in) cout<<l<<endl;
		else cout<<"0\n";
	}

}

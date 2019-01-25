#include<iostream>
#include<vector>
using namespace std;
vector<int> v;

int main() {
	int n,k,in;
	cin>>n>>k;
	for(int i=0;i<n;i++) {
		cin>>in;
		v.push_back(in);
	}
	for(int i=0;i<k;i++) {
		cin>>in;
		vector<int>::iterator it=lower_bound(v.begin(),v.end(),in);
		if(*it==in) cout<<it-v.begin()+1<<endl;
		else cout<<0<<endl;
	}

}

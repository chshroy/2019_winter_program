#include<iostream>
#include<vector>
#include<iomanip> 
using namespace std;

vector<int> v;
int main() {
	int n, q, a, k;
	cin>>n;
	while(n--) {
		cin>>q>>a;
		if(q == 1) v.push_back(a);
		else if(q == 2) {
			for(int i=0;i<a;i++) 
				v.pop_back();
		}
		else cout<<v[a]<<endl;
	}
}

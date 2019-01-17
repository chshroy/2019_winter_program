#include<iostream>
#include<vector>
using namespace std;

vector<int> v[105];
int main() {
	int n, q, a, k;
	cin>>n; //scanf("%d", &n);
	while(n--) {
		cin>>q>>k>>a; //scanf("%d%d%d",&q,&k,&a);
		if(q == 1) v[k].push_back(a);
		else if(q == 2) {
			for(int i=0;i<a;i++) 
				v[k].pop_back();
		}
		else printf("%d\n",v[k][a]);
	}
}
	

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	
	while(cin>>n && n) {
		vector<int> v[20];
		cout<<"f("<<n<<")\n";
		v[0].push_back(n);
		for(int i=1;i<n;i++) {
			for(int j=0;j<v[i-1].size();j++) {
				if(v[i-1][j]<2) {
					v[i].push_back(v[i-1][j]);
					continue;
				}
				v[i].push_back(v[i-1][j]-1);
				v[i].push_back(v[i-1][j]-2);
			}
			for(int j=0;j<v[i].size();j++) cout<<"f("<<v[i][j]<<") "; 
			cout<<endl;
		}
		cout<<"f("<<n<<") = "<<v[n-1].size()<<endl;
		cout<<endl;
	}
	
}

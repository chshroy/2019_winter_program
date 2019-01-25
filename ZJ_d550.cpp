#include<iostream>
#include<algorithm>
using namespace std;
#define endl '\n'

struct stu {
	int a[205];
};

stu st[10005];
int n, m;

bool cmp(stu a, stu b) {
	for(int i=0;i<m;i++) 
		if(a.a[i] != b.a[i]) return a.a[i]<b.a[i];
	
	return true; //兩個陣列一模一樣
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;j++)
			cin>>st[i].a[j];
	
	sort(st, st+n, cmp);

	for(int i=0;i<n;++i) {
		for(int j=0;j<m;j++)
			cout<<st[i].a[j]<<" ";
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+1;
vector<string> v[MAXN];
int IDm[MAXN],IDn[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m,n;
    string s;
    char c;
    cin>>m>>n;
    unsigned int i,j;
    for(i=0;i<m;++i) IDm[i+1]=i;
    for(i=0;i<n;++i) IDn[i+1]=i;
    for(i=0;i<m;++i) {
        v[i].reserve(n);
        for(j=0;j<n;++j) {
            cin>>s;
            v[i].push_back(s);
        }
    }
    
    int t;
    int x1,x2,y1,y2;
    cin>>t;
    while(t--) {
        cin>>c;
        if(c=='S') {
            cin>>x1>>y1>>x2>>y2;
            swap(v[IDm[x1]][IDn[y1]],v[IDm[x2]][IDn[y2]]);
        }
        else if(c=='R') {
            cin>>x1>>x2;
            swap(IDm[x1],IDm[x2]);
        }
        else if(c=='C') {
            cin>>x1>>x2;
            swap(IDn[x1],IDn[x2]);
        }
    }
    for(i=0;i<m;++i) {
        for(j=0;j<n;j++) {
            cout<<v[IDm[i+1]][IDn[j+1]]<<" \n"[j==n-1];
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main() {
	//注意這一題的序列不能是空序列，一定至少要一個數字
	//特別處理整個數列都是負的狀況
	int n,t;
	cin>>t;
	while(t--) {
		cin>>n;
		int a,ansa=-10000,ansb=0,cur=0;
		bool b=false; //記錄數列中是否有沒有正整數
		for(int i=0;i<n;i++){
			cin>>a;
			if(a>=0) b=true;
			cur+=a;
			if(cur<0) cur=0;
			ansa=max(ansa,a); //ansa紀錄數列中的最大值，在數列全部都是負的狀況需要他
			ansb=max(cur,ansb);
		}
		if(b) cout<<ansb<<endl;
		else cout<<ansa<<endl; //數列中全部都是負數
		
	}
}

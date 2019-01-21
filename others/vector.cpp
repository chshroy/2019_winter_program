#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;

#define wer(i) cout<<(#i)<<" "<<i<<endl;

int main() {
	vector<int> v; //宣告
	vector<int> v1(1000); //宣告 預設空間為1000
	cout<<v1.size()<<endl;
	
	wer(v.size());
	wer(v1.size());
	cout<<endl;
	
	cout<<"加十個數字"<<endl; //{1,2,}
	for(int i=1;i<=10;i++) v.push_back(i);  //{1,2,3,4,5,6,7,8,...50}
	wer(v.size());
	wer(v.at(0));
	wer(v[0]);
	wer(v.at(10));
	
	wer(v.front()); //v[0]
	wer(v.back()); //v[v.size()-1]
	 
	//走訪元素 
	cout<<"1. for(vector<int>::iterator it = v.begin();it!=v.end();it++)\n";
	for(vector<int>::iterator it = v.begin();it!=v.end();it++) {
		cout<<*it<<" ";
	}
	cout<<endl;
	
	cout<<"2. for(int i=0;i<v.size();i++)\n";
	for(int i=0;i<v.size();i++) 
		cout<<v[i]<<" ";
	cout<<endl;
	
	cout<<"for(int i : v) cout<<i<<" ";\n";
	for(int i : v) cout<<i<<" ";
	cout<<endl;
	
	/*
	reverse(v.begin(),v.end());
	for(int i : v) cout<<i<<" ";
	cout<<endl;
	*/
	
}

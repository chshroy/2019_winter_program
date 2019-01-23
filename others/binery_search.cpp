#include<iostream>
using namespace std;

int main() {
	int a[10] = { 2, 4, 6, 10, 21, 32, 43, 44, 44, 50}; 
	//必須是排序過的數列才能二分搜
	int d = 32; //要找的數字

	int l = 0, r = 9;
	while(l < r) {
		int mid = (l+r)/2;
		if(a[mid] < d) l = mid+1;
		else r = mid;
	}

	if(a[l] == d) cout<<l<<endl;
	else cout<<"not found\n";
}

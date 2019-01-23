#include<bits/stdc++.h>
using namespace std;

struct student {
	string name;
	int math;
	int chinese;
};

bool QQQQ(student a, student b) {
	return a.name<b.name;
}

int main() {
	student a[1000];
	for(int i=0;i<10;i++) {
		cin>>a[i].name>>a[i].math>>a[i].chinese;
	}
	cout<<endl;
	
	sort(a,a+10,QQQQ);
	
	for(int i=0;i<10;i++) {
		cout<<a[i].name<<" "<<a[i].math<<" "<<a[i].chinese<<endl;
	}
}

/*
rot 10 20
yen 28 44
king 19 20
boy 283 19
hen 32 10
hello 93 2
purple 23 41
andy 70 84
rody 9 0
ie 82 43
*/

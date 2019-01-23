#include<iostream>
using namespace std;

void f1(int t) {
	t += 10;
}

void f2(int *t) {
	*t += 10;
}

int main() {
	int t = 10;
	
	cout<<t<<endl;
	cout<<"f1(int t)\n";
	f1(t);
	cout<<t<<endl;
	
	cout<<"f2(int *t)\n";
	f2(&t);
	cout<<t<<endl;
	
}

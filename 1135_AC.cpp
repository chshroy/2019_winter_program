#include<cstdio>
using namespace std;

const int maxn = 1e6+500;
int sum[maxn];

int main() {
	int n, in, q;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		scanf("%d", &in);
		sum[i] = sum[i-1] + in;
	}
	scanf("%d", &q);
	while(q--) {
		int l, r;
		scanf("%d%d", &l, &r);
		printf("%d\n", sum[r] - sum[l-1]);
	}
	
}

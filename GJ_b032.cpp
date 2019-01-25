#include<iostream>  
using namespace std;  
  
int main()  
{  
    int n;  
    int dp[105],a[105],ma;  
    while(cin>>n)  
    {  
		ma = 1;
        for(int i=0;i<n;i++)  
        {  
            cin>>a[i];  
            dp[i]=1;  
        }  
        for(int i=1;i<n;i++)  
            for(int j=0;j<i;j++)  
            {  
                if(a[i]>a[j]) dp[i] = max(dp[i], dp[j]+1);
				ma = max(ma, dp[i]);
            }  
        cout<<ma<<endl;  
    }  
}  

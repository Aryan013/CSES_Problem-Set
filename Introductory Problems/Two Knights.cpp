#include <bits/stdc++.h>
using namespace std;

int main() {
long long n;
cin>>n;
for(int i=1;i<=n;i++)
{if(i==1)
{cout<<0<<endl;}
else
{
    long long temp=i*i;
    long long temp1=temp*(temp-1);
    long long sub=4*(i-1)*(i-2);
    long long ans=(temp1/2)-sub;
    cout<<ans<<endl;
}   
    
    
}
}

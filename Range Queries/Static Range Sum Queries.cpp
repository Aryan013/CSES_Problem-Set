#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int queries;
cin>>queries;
long arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    
}
long pref[n]={0};
pref[0]=arr[0];
for(int i=1;i<n;i++)
{pref[i]=pref[i-1]+arr[i];}

while(queries--)
{int a,b;
cin>>a>>b;
long long ans=pref[b-1]-pref[a-1]+arr[a-1];
cout<<ans<<endl;
    
}
}

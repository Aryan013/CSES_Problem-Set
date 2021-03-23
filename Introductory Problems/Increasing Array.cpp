#include <bits/stdc++.h>
using namespace std;

int main() {
long long n;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++)
{int c;
cin>>c;
arr.push_back(c);
    
}
long long ans=0;
for(int i=1;i<n;i++)
{
    if(arr[i]<arr[i-1])
    {ans+=arr[i-1]-arr[i];
        arr[i]=arr[i-1];
    }
    
}
cout<<ans<<endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{long long a,b;
cin>>a>>b;
long long max1;
long long min1;
    if(a>b)
    {max1=a;
        min1=b;
    }
    else
    {max1=b;
        min1=a;
    }
    long long dif=max1-min1;
    if(dif>min1)
    {cout<<"NO"<<endl;}
    else
    {max1=max1-2*dif;
        min1=min1-dif;
        if(max1%3==0)
        {cout<<"YES"<<endl;}
        else
        {cout<<"NO"<<endl;}
        
        
    }
    
    
    
    
}
}

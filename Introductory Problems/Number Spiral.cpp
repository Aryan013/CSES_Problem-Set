#include <bits/stdc++.h>
using namespace std;

int main() {
int c;
cin>>c;
while(c--)
{long long x,y;
cin>>x>>y;
if(x>=y)
{long long a;
    if(x%2==0)
    {a=x*x;}
    else
    {a=(x-1)*(x-1)+1;
        
    }
    if(x%2==0)
    {long long ans=a-(y-1);
        cout<<ans<<endl;
    }
    else
    {
        long long ans=a+(y-1);
        cout<<ans<<endl;
    }
}
else
{long long a;
    if(y%2!=0)
    {a=y*y;}
    else
    {a=(y-1)*(y-1)+1;
        
    }
    if(y%2!=0)
    {long long ans=a-(x-1);
        cout<<ans<<endl;
    }
    else
    {
        long long ans=a+(x-1);
        cout<<ans<<endl;
    }
    
    
    
}
    
    
    
    
    
}
}

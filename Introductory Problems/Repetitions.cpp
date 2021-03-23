#include <bits/stdc++.h>
using namespace std;

int main() {
string str;
cin>>str;
long long final=1;
long long ans=1;
int i=0;
while(i<str.size()-1)
{if(str[i]==str[i+1])
   {ans++;
       i++;
       
   }
   else
   {final=max(final,ans);
       ans=1;
       i++;
   }
    
}
    final=max(ans,final);
    cout<<final<<endl;

}

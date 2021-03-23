#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main() {
long long n;
cin>>n;
long long ans=1;
int i=1;
while(i<=n)
{ans=(ans*2)%mod;
    i++;
    
}
 
 cout<<ans%mod;   
    
    



}

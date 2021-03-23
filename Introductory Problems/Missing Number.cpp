#include <bits/stdc++.h>
using namespace std;

int main() {
long long n;
cin>>n;
long long sum1=0;
sum1=(n*(n+1))/2;
long long sum=0;
for(int i=0;i<n-1;i++)
{int c;
cin>>c;
sum+=c;
    
}
    cout<<sum1-sum<<endl;
    
    

}

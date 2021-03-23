#include <bits/stdc++.h>
using namespace std;

int main() {
long long n;
cin>>n;
vector<int>arr;
for(int i=1;i<=n;i++)
{arr.push_back(i);}
long long sum=(n*(n+1))/2;
if(sum%2!=0)
{cout<<"NO"<<endl;}
else
{sum=sum/2;
cout<<"YES"<<endl;
   vector<int>set1;
   vector<int>set2;
   int i=arr.size()-1;
   while(i>=0 and sum!=0)
   {if(arr[i]<=sum)
   {set1.push_back(arr[i]);
   sum-=arr[i];
       i--;
       
   }
   else
   {set2.push_back(arr[i]);
       i--;
   }
   
   }
     if(sum==0)
     {while(i>=0)
     {set2.push_back(arr[i]);
         i--;
         
     }
         
         
     }
    cout<<set1.size()<<endl;
    int sum1=0;
    for(int j=0;j<set1.size();j++)
    {sum1+=set1[j];
        cout<<set1[j]<<" ";}
    cout<<endl;
    cout<<set2.size()<<endl;
    for(int j=0;j<set2.size();j++)
    {cout<<set2[j]<<" ";}
    cout<<endl;
       
   }
    
    
    



}

#include <bits/stdc++.h>
using namespace std;

int main() {
long long n;
cin>>n;
long long count2=0;
long long count5=0;
 for (int i = 5; n / i >= 1; i *= 5)
        count5 += n / i;
cout<<count5<<endl;


}

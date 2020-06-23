#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll n;
cin>>n;
vector<pair<ll,ll>>a(n),c(n);
vector<ll>b(1000001,0);
for(int i=0;i<n;i++)
{
ll x,y;
cin>>x>>y;
a[i].first=x;
a[i].second=y;
b[i]=0;
}
 
for(int i=0;i<n;i++)
b[a[i].first]++;
for(int i=0;i<n;i++)
{
    c[i].first=n-1;
    c[i].first+=b[a[i].second];
    c[i].second=2*(n-1)-c[i].first;
}
for(int i=0;i<n;i++)
    cout<<c[i].first<<" "<<c[i].second<<"\n";
 
  return 0;
  
}
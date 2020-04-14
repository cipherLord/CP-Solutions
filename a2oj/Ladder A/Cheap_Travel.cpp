#include "bits/stdc++.h"
#define ll long long int

using namespace std;

int main (){

    int n,m,a,b;

    ll minimum = INT64_MAX;
    ll cost =0;
    cin >> n >> m >> a >> b;

    for (ll k =0 ; k*m <= n ; k++)
    {   
        cost = (n - k*m)*a + k*b;
        if(cost < minimum) minimum = cost;
    }

    if((n/m+1)*b <minimum) minimum = (n/m+1)*b;
    cout << minimum;

}
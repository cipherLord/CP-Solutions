#include "bits/stdc++.h"
#define ll long long int

using namespace std;

bool isLucky(ll a){
    if (a < 0) a = fabs(a);
    while ( a > 0 )
    {
        if(a%10 == 8) return true;
        a = a/10;
    }
    return false;
}

int main(){

    ll a ;
    cin >>a;

    for (ll i =1 ; ;i ++){
        if(isLucky(a + i)) 
        {
            cout << i; 
            return 0;
        }
    }


}
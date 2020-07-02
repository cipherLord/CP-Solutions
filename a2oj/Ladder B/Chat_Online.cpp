#include"bits/stdc++.h"

#define fastio ios_base::sync_with_stdio(false)
#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (ll i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (ll i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (ll i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <ll,ll>
#define vec vector<ll>
#define vecpa vector<pa>
#define vec2D vector <ll<ll>>
#define iterate vector<ll>::iterator
#define ll long long int
#define ld long double
#define pub push_back
#define pob pop_back

using namespace std;

bool checkZ(ll first, ll second, vecpa &z){
    loop(i,z.size()){
        if(first >= z[i].first && first <= z[i].second) return true;
        else if(second >= z[i].first && second <= z[i].second) return true;
        else if(first < z[i].first && second > z[i].second) return true;
    }
    return false;
}

bool checkX(ll juggnoob, vecpa &x, vecpa &z){
    loop(i,x.size()){
        if(checkZ(x[i].first + juggnoob,x[i].second + juggnoob,z)) return true;
    }
    return false;
}

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);

    ll p,q,l,r;
    cin >> p >> q >> l >> r;
    vecpa x(q);
    vecpa z(p);

    loop(i,p){
        cin >> z[i].first >> z[i].second ;
    }

    loop(i,q){
        cin >> x[i].first >> x[i].second;
    }

    ll count =0;
    LOOP(j,l,r){
        if(checkX(j,x,z)) count++;
    }

    cout << count;

}
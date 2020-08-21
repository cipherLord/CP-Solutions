#include"bits/stdc++.h"
#define fastio ios_base::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ict int t; cin >> t
#define lct ll t; cin >> t;
#define in(a) int a; cin >> a
#define ln(a) ll a; cin >> a
#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (ll i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (ll i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (ll i = k; i >= n; --i) 
#define mp make_pair 
#define pa pair <ll,ll>
#define vec vector<ll>
#define vecpa vector<pa>
#define vec2D vector <ll<ll>>
#define que queue<ll>
#define deq deque<ll> 
#define stk stack<ll>
#define iterate vector<ll>::iterator
#define pub push_back
#define pob pop_back
#define pof pop_front
#define puf push_front
#define emp emplace_back

using namespace std;

void solve(){
    ll x1,y1,z1,x2,y2,z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    int res = 0;
    if(z1 >y2){
        res += 2*y2;
        z1 -= y2;
        if(x1 + z1 >= z2) cout << res << endl;
        else cout << res - 2* (z2 - z1- x1) << endl;
    }
    else{
        res += 2*z1;
        y2 -= z1;
        if(x1 >= z2) cout << res << endl;
        else cout << res - 2*(z2 - x1) << endl;
    }
}

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ict;
    int increm = t;
    while(t--) solve();
}
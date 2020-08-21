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
    ll n;
    cin >>  n;
    vector<ll> v(n);
    for(ll i=0; i< n; i++){
        cin >> v[i];
    }
    ll sum = 0;
    for(ll i = 0; i<n ;i++)sum+=v[i];
    if(sum%3!=0) cout << 0 <<endl;
    else{
        vector<ll> right(n);
        ll lsum = 0;
        ll rsum = 0;
        ll rcount =0;
        looprev(i,n){
            rsum += v[i];
            // cout << "rsum:" <<rsum <<endl;
            if(rsum == sum/3) rcount++;
            // cout << "rcount:"<< rcount << endl;
            right[i] =rcount;
        }
        ll ans = 0;
        loop(i,n-2){
            lsum +=v[i];
            if(lsum == sum/3) ans+= right[i+2];
            // cout << ans << endl;
        }
        cout << ans <<endl;
    }
}

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
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
   ll r,g,b,w;
   cin >> r>>g>>b>>w;
   if(r%2 + g%2 + b%2 +w%2 <= 1)cout << "Yes" << endl;
   else{
       if (r>0 && g>0 && b>0){
            r--;
            g--;
            b--;
            w = w+3;
            if(r%2 + g%2 + b%2 + w%2<= 1)cout << "Yes" << endl;
            else cout << "No" << endl;
       }
       else cout << "No" << endl;
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
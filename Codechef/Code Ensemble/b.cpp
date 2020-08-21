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
    string s;
    unordered_map<char,int> count;
    cin >> s;
    for(int i = 0; i< s.length(); i++){
        count[s[i]]++;
    }
    ll x1,y1;
    cin >> x1 >> y1;
    ll q;
    cin >> q;
    ll x2,y2;
    bool flag1 = false,flag2 = false;
    while(q--){
        flag1 = false;
        flag2 = false;
        cin >> x2 >> y2;
        if(x2-x1>0){
            if(count['R']>=x2-x1) flag1 = true;
        }
        else{
            if(count['L']>=x1-x2) flag1 = true;
        }

        if(y2-y1>0){
            if(count['U']>=y2-y1) flag2 = true;
        }
        else{
            if(count['D']>=y1-y2) flag2 = true;
        }

        if(flag1 && flag2) cout << "YES " << abs(x2-x1) + abs(y2-y1)<<endl;
        else cout << "NO" << endl;
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
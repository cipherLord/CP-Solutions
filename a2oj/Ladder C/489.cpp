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
int user_ceil(ll s){
    double x = (s*1.0/9) - floor(s/9);
    if (x>0) return s/9 + 1;
    else return s/9;
}

void solve(){
    int m ,s;
    cin >> m >> s;
    if(s==0){
        if(m==1) cout <<"0 0" << endl;
        else cout << "-1 -1" <<endl;
        return;
    }

    if(user_ceil(s) > m) cout << "-1 -1" << endl;
    else if (user_ceil(s) == m){
        string low="", high="";
        while(s>9){
            s = s - 9;
            high += '9';
            low += '9';
        }
            cout << to_string(s) + low << " " << high + to_string(s) << endl;
            return;
    }
    else{
        string high,low;
        int low_sum = s;
        while(m!= user_ceil(s)){
            high = high + '0';
            low = '1' + low;
            low_sum--;
            m--;
        }
        string l,h;
        while(s>9){
            s = s-9;
            h+= '9';
        }
        h += to_string(s);

        while(low_sum>9){
            low_sum -= 9;
            l += '9';
        }
        l = to_string(low_sum) + l;
        cout << low + l << " " << h + high << endl;
        return;
    }
}

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
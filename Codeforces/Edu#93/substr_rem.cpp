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


int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ict;
    while(t--){
        string a;
        cin >> a;
        vector <int> store;
        int n = a.size();

        int sum =1;
        loop(i,n-1){
            if(a[i] == '1' && a[i+1] == '1'){
                sum +=1;
            }
            else if (a[i] == '1' && a[i+1] == '0'){
                store.push_back(sum);
                sum = 1;
            }
        }
        if(a[n-1] == '1') store.push_back(sum);

        sort(store.begin(),store.end(),greater<int>());
        int alice = 0;
        int bob = 0;
        for(int i = 0 ; i<store.size(); i++){
            if(i%2) bob+= store[i];
            else alice+=store[i];
        }
        cout << alice<< endl;
    }
}
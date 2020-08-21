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

ll findSubArrays(vector<int> &arr, int n) 
{  
    unordered_map<int, vector<int> > map; 
   
    ll sum = 0; 
    ll count = 0;
   
    for (ll i = 0; i < n; i++) 
    { 
        sum += arr[i]; 

        if (sum == 0) count++;
            

        if (map.find(sum) != map.end()) 
        { 
            vector<int> vc = map[sum]; 
            for (auto it = vc.begin(); it != vc.end(); it++) 
                count++;
        } 
   
        map[sum].push_back(i); 
    } 
    return count; 
} 
  

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ict;
    while(t--){
        int n;
        cin >> n;   
        string s;
        cin >> s;

        vector<int> store;
        for(auto ch : s){
            store.pub(ch-'0');
        }

        loop(i,n){
            store[i]--;
        }
        ll res = findSubArrays(store,n);

        cout << res << endl;
    }
}
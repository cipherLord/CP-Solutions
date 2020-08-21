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
#define emp emplace_back

using namespace std;

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
     
    while(t--){

        ll n, k;
        cin >> n >> k;
        vec store(n);
        ll minVal = INT_FAST64_MAX;
        ll minKey = INT_FAST64_MAX;
        ll rem;

        for(ll i =0 ;i < n ; i++){
           cin >> store[i];
        }

        for(ll i =0; i<n; i++){
            if(store[i] < k){
                if(k%store[i] == 0){
                    rem = k/store[i] - 1;
                    if(rem < minVal){
                        minVal = rem;
                        minKey = store[i]; 
                    }
                }
            }
        }
        if(minKey == INT_FAST64_MAX) cout << -1 << endl;
        else cout << minKey << endl;
    }
}
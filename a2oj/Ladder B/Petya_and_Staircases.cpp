#include"bits/stdc++.h"

#define fastio ios_base::sync_with_stdio(false)
#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (ll i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (ll i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (ll i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <ll,ll>
#define vec vector<ll>
#define vec2D vector <ll<ll>>
#define iterate vector<ll>::iterator
#define ll long long int
#define ld long double
#define pub push_back
#define pob pop_back

using namespace std;


int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m;
    cin >> n >> m;

    vec v;
    v.resize(m);
    ll temp;

    loop(i,m){
        cin >> temp;
        if(temp==1 || temp == n){
            cout << "NO";
            return 0;
        }
        v.pub(temp);
    }

    sort(v.begin(),v.end());
    iterate it;

    for(it = v.begin(); it < v.end(); ++it){
        if(*it +1 == *(it+1) && *(it+1) +1 == *(it+2)){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
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

bool checkComplexity (ll complexity , vec &b, vec&a){
    loop(i,b.size()){
        if(b[i] == complexity) return true;
    }
    loop(i,b.size()){
        if(b[i] > *max_element(a.begin(),a.end())) {
            b[i] = complexity;
            return true;
        }
    }
    return false;
}

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vec a(n),b(m);
    loop(i,n){
        cin >> a[i];
    }

    loop(i,m){
        cin >> b[i];
    }

    ll count = 0;

    loop(i,n){
        if(!checkComplexity(a[i],b,a)) count++;
    }

    cout << count;




}
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

        ll c,r;
        cin >> c>> r;
        double chef, rick;
        chef = c*1.0/9;
        rick = r*1.0/9;
        // cout << chef << " "<< rick <<endl;
        if(chef < rick){
            if(floor(chef)==chef)cout << "0 " << (ll)chef <<endl;
            else cout << "0 " << (ll)chef+1 <<endl;
        }
        else{
            if(floor(rick)==rick)cout << "1 " << (ll)rick<< endl;
            else cout << "1 " << (ll)rick + 1<< endl;
        }

    }
}
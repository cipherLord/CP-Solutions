#include "bits/stdc++.h"

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

    ll n,k;
    cin >> n >> k;
    vec v(n);
    ll temp;
    loop(i,n){
        cin >> temp;
        v[i] = temp;
    }

    ll max = *max_element(v.begin(),v.end());
    ll min = *min_element(v.begin(), v.end());

    if(max - min > k) cout << "NO";
    else
    {
        cout<<"YES\n";
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<v[i];j++)
            {
                cout<<j%k+1<<" ";
            }
            cout<<"\n";
        }
 
    }
    return 0;

}
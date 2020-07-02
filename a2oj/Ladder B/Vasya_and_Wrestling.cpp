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

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    vec a(n);
    vec b;
    vec c;
    ll sum1 = 0, sum2 = 0; 

    loop(i,n){
        cin >> a[i];
        if(a[i] > 0){
            sum1 += a[i];
            b.pub(a[i]);
        }
        else{
            sum2 += abs(a[i]);
            c.pub(abs(a[i]));
        }
    }

    if(sum1 > sum2) cout << "first";
    else if(sum1 < sum2)cout << "second";
    else{
        loop(i,min(b.size(),c.size())){
            if(b[i] > c[i]){
                cout << "first";
                return 0;
            }
            if(b[i] < c[i]){
                cout << "second";
                return 0;
            }
        }

        if(b.size() > c.size()) cout << "first";
        else if (b.size() < c.size()) cout << "second";
        else{
            if(a[n-1]>0) cout << "first";
            else cout << "second";
        }
    }

}
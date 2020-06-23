#include"bits/stdc++.h"

#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (int i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (int i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<ll>
#define vec2D vector<int<int>>
#define ll long long
#define ld long double

using namespace std;

ll findElement(vec v){
    loop(i,v.size() - 1){
        if(v[i] > v[i+1]) return i;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vec v;
    ll n,temp;
    cin >>n;
    v.resize(n);
    loop(i,n){
        cin >> temp;
        v[i] = temp;
    }
    ll decrease =0;
    ll increase=0;

    loop(i,n-1){
        if(v[i] > v[i+1]) increase++;
        else decrease++;
    }

    if(v[n-1] > v[0]) increase++;
    
    // cout << increase << " " << decrease<<endl;
    // cout << n<<endl;
    // cout << findElement(v)<<endl;

    if(increase > 1) cout << "-1";
    else if(decrease == n-1) cout << "0";

    else{
        cout << n-1-findElement(v);
    }
}
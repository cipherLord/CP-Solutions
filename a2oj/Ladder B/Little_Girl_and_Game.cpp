#include"bits/stdc++.h"

#define fastio ios_base::sync_with_stdio(false)
#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (ll i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (ll i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (ll i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2D vector <int<int>>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    vec v(26,0);
    loop(i,s.length()){
        v[(int)(s[i] - 'a')]++;
    }

    int count = 0;

    loop(i,26){
        if(v[i]%2 == 1) count++;
    }

    if(count==0 || count%2==1) cout << "First";
    else cout << "Second";

}


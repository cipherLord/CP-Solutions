#include"bits/stdc++.h"

#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (int i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (int i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2d vector<vector<ll>>
#define ll long long
#define ld long double

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll v[3][3];

    loop(i,3){
        loop(j,3){
            cin >> v[i][j];
        }
    }

    v[0][0] = (v[2][0]+ v[2][1] + v[1][0] + v[1][2] - v[0][1] - v[0][2])/2; 
    v[1][1] = (v[0][1]+ v[0][2] + v[2][0] +  v[2][1] - v[1][0] - v[1][2])/2;
    v[2][2] = (v[0][1] + v[0][2] - v[2][0] - v[2][1] + v[1][0] + v[1][2])/2;

    loop(i,3){
        loop(j,3){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
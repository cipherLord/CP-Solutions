#include"bits/stdc++.h"

#define loop(i,n) for (int i = 0; i < n; ++i) 
#define looprev(i,n) for (int i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (int i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2D vector <int<int>>
#define ll long long
#define ld long double

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x,y,n;
    cin >> x >> y >> n;

    ll result;
    
    switch (n%6)
    {
    case 1:
        result = x;
        break;

    case 2:
        result =y;
        break;

    case 3:
        result = y-x;
        break;

    case 4:
        result = -x;
        break;

    case 5:
        result = -y;
        break;    
    default:
        result = x-y;
        break;
    }
    while(result < 0){result = result + 1000000007;}
    cout << result%(1000000007);

}
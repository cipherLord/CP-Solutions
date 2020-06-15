#include"bits/stdc++.h"

#define loop(i,n) for(int i = 0; i < n; ++i) 
#define LOOP(i,k,n) for (int i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2D vector <int<int>>
#define ll long long
#define ld long double

using namespace std;

int returnPtr(string a[], string temp, int m)
{
    loop(i,m){
        if(a[i] == temp) return i;
    }
    return NULL;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n>>m;
    string a[m],b[m];
    loop(i,m){
        cin >> a[i] >> b[i];
    }
    string temp;    
    loop(i,n){
        cin>> temp;
        if(a[returnPtr(a,temp,m)].size() <= b[returnPtr(a,temp,m)].size()) cout << temp << " ";
        else cout << b[returnPtr(a,temp,m)]<<" ";
    }
}


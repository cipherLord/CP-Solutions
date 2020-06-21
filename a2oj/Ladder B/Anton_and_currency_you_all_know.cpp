#include"bits/stdc++.h"

#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (int i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (int i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2D vector <int<int>>
#define ll long long
#define ld long double
#define SIZE 100000

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    loop(i,s.size()){
        if((int)(s[i])%2 == 0){
            if(s[i]<s[s.size()-1]) {
                swap(s[i],s[s.size() -1]);
                cout << s;
                return 0;
            }
            else continue;
        }
    }

    looprev(i,s.size()){
        if((int)(s[i])%2 == 0){
            if(s[i]>s[s.size()-1]) {
                swap(s[i],s[s.size() -1]);
                cout << s;
                return 0;
            }            
        }
    }
    cout << "-1";

}
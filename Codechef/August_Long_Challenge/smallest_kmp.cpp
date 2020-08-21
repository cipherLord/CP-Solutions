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
    
    int t;
    cin >> t;
    while(t--){
        string a,b;
        string prefix,suffix;
        char key;
        map <char,int> ump;
        cin >> a >> b;
        for(int i = 0; i<b.size(); i++){
            if(b[i]!=b[0]){
                key = b[i];
                break;
            }
        }
        loop(i,a.size()){
            ump[a[i]]++;
        }

        loop(i,b.size()){
            ump[b[i]]--;
        }

        for(auto it : ump){
            if(it.first < b[0]){
                while(it.second--){
                    prefix += it.first;
                }
            }
            else if(it.first == b[0]){
                if(it.first < key){
                    while(it.second--){
                        prefix += it.first;
                    }                    
                }
                else{
                    while(it.second--){
                    suffix += it.first;
                    }                
                }
            }
            else{
                while(it.second--){
                    suffix += it.first;
                }
            }
        }
        cout << prefix + b + suffix <<endl;

    }

}
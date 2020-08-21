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
#define MOD 1000000007

using namespace std;
map<ll,ll>cnt;

void storeInMap (string curr, map<ll,ll> &result){
    for(int i = 0 ; i<curr.size(); i++){
        cnt[curr[i]-'0']++;
        cnt[curr[i]-'0']%= MOD;
    }
    ll maxElement = INT_FAST64_MIN;
    for(auto it : cnt){
        if(it.second > maxElement) maxElement = it.first;
        else continue;
    }
    result[maxElement]++;
    result[maxElement] %= MOD;
    cnt.clear();
    return ;
}

void printSubSeqRec(string str, int n,int index, string curr, map<ll,ll> &result) 
{ 
    if (index == n)  
        return; 
   
    storeInMap(curr,result);
    for (int i = index + 1; i < n; i++) { 
   
        curr += str[i]; 
        printSubSeqRec(str, n, i, curr,result); 
    
        // backtracking 
        curr = curr.erase(curr.size() - 1);  
    } 
    return ; 
} 

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string str;
        map <ll,ll> result;
        for(ll i = 1; i <=n ; i++){
            result[i] = 0;
        }

        for(ll i = 0; i<n ; i++){
            ll temp;
            cin >> temp;
            str += to_string(temp);
        }
        printSubSeqRec(str,str.size(),-1,"",result);

        for(auto it = result.begin(); it != result.end(); it++){
            if(it!=result.begin())cout << it->second <<" ";
        }
        cout << endl;
    }
}
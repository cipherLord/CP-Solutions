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

int findSimp(vector <int> &v, int pos1, int pos2)
{

	map<int,int> M;
	for(int i =pos1;i< pos2+1;i++)
	{
		int val = v[i];
		++M[val];
	}

	int simpCount = 0;

	for(auto itr = M.begin(); itr != M.end(); ++itr)
	{
		if(itr->second > 1)
			simpCount += itr->second;
	}

	return simpCount;
}

int recurse (vector<int> &v,int k,int cost,int start,int end){
    int min = cost;
    int posn = start;
    int minLeft;
    int minRight;
    bool minFound = false;

    for(int i = start; i<=end ; i++){

        int leftCost = k + findSimp(v,start,i);
        int rightCost = k + findSimp(v,i+1,end);
        
        if(leftCost +rightCost <=min){
            posn = i;
            min = leftCost + rightCost;
            minLeft = leftCost;
            minRight = rightCost;
            minFound = true;
        }
    }
    if(minFound) return recurse(v,k,minLeft,start,posn) + recurse(v,k,minRight,posn+1,end);
    else return min;
}


int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;

        vector <int> v(n);
        for(int i =0 ; i<n ; i++){
            cin >> v[i];
        }
        if(k==1){
            unordered_map <int,int> s;
            vector <int> cnt(n,1);
            int count =0;
            int i;
            while(i<n){
                if (s[v[i]] > 1){
                    ++count;
                    s.clear();
                }
                else++s[v[i]];
                if(i==n-1){
                    ++count;
                    s.clear();
                }   
                i++;
            }
         
            cout << count << endl;
        }
        else{
            unordered_map <int,int> check;
            int count = 0;
            for(int i = 0; i < n; i++){
                if(check.find(v[i])== check.end()) {
                    check[v[i]] = 1;
                }
                else if(check[v[i]] == 1){
                    count+=2;
                    check[v[i]]++;
                }
                else{
                    count++;
                    check[v[i]]++;
                }
            }
            int ans;
            ans = recurse(v,k,k + count,0,n-1);
            cout << ans <<endl;
        }
    }
}
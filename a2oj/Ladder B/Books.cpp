#include"bits/stdc++.h"

#define fastio ios_base::sync_with_stdio(false)
#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define looprev(i,n) for (ll i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (ll i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (ll i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <ll,ll>
#define vec vector<ll>
#define vec2D vector <ll<ll>>
#define iterate vector<ll>::iterator
#define ll long long int
#define ld long double
#define pub push_back
#define pob pop_back

using namespace std;

ll max2(ll a, ll b){
    if (a>b) return a;
    else return b;
}

ll max3(ll a, ll b, ll c){
    return max2(max2(a,b),c);
}


ll crossArraySum (vec &v , ll l,ll m, ll r, ll t){

    ll left_dist = 0;
    ll right_dist = 0;
    ll sum =0;
    ll left_sum = INT_MIN;
    LOOPREV(i,m,l){
        sum = sum + v[i];
        if(sum > left_sum && sum < t){
            left_sum = sum;
            distance = m - i;
        }
    }

    sum = 0; 
    ll right_sum = INT_MIN; 
    LOOP(i,m+1,r){ 
        sum = sum + v[i]; 
        if (sum > right_sum) {   
            right_sum = sum;
            distance = i - m -1;
        }
    }

    ll max = max3(left_sum + right_sum, left_sum, right_sum);
    if(max = left_sum + right_sum)
    

}

ll subArraySum(vec &v, ll l , ll r , ll t){
    
    if(l==r) return 0; 
    ll m = (l+r)/2;

    return max3(subArraySum(v,l,m,t),subArraySum(v,m+1,r,t), crossArraySum(v,l,m,r,t));

}

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,t;
    cin >> n >> t;

    vec v;

    v.resize(n);
    ll temp;

    loop(i,n){
        cin >> temp;
        v.pub(temp);
    }
    ll l =0, r=n-1;
    ll result = subArraySum(v,l,r,t);


}
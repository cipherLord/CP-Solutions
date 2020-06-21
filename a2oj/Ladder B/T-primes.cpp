#include"bits/stdc++.h"

#define loop(i,n) for (ll i = 2; i <= sqrt(n) + 1; ++i) 
#define LOOP(i,k,n) for (ll i = k; i < n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2D vector <int<int>>
#define ll long long
#define ld long double



using namespace std;
const ll SIZE = 1000000; 

 


// O(k sqrt(n)) solution
bool isPrime(ll n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

bool isTprime(ll x){
    int count = 0;
    if(x == 4) return true;
    if(x%2 == 0) return false;
    if (isPrime(x) || x == 1 )  return false; 
       
    loop(i,x){
        if (x%i ==0) count++;
        if(count > 1) return false; 
    }
    return true;
}

// Most efficient solution
void SieveOfEratosthenes(ll n , bool prime[]) 
{  
    prime[0] = false;
    prime[1] = false;
  
    for (ll p=2; p*p<=n; p++) 
    { 
  
        if (prime[p] == true) 
        {   
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 

bool isPerfectSquare( long double x) 
{   

  long double sr = sqrt(x); 
 
  return ((sr - floor(sr)) == 0); 
} 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    ld k;

    bool prime[SIZE+1]; 
    memset(prime, true, sizeof(prime));
    SieveOfEratosthenes(SIZE, prime);

    LOOP(i,0,n){
        cin >> k;

        if(isPerfectSquare(k) && prime[(ll)sqrtl(k)]== true) cout << "YES"<< endl;
        else cout<< "NO" << endl;
    }
}
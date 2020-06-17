#include"bits/stdc++.h"

#define loop(i,n) for (int i = 0; i < n; ++i) 
#define LOOP(i,k,n) for (int i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2D vector <int<int>>
#define ll long long
#define ld long double

using namespace std;

string convert_to_bit(int x,int n){
    string s;
    int temp = x;
    loop(i,n){
        s = s + to_string(temp%2);
        temp = temp/2;
    }
    return s;
}

int difference (string test, string fedor, int n){

    int count =0;
    loop(i,n){
        if(test[i]!= fedor[i]) count ++;
    }
    return count;  
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,k;
    cin >>n>>m>>k;

    int arr[m+1];

    loop(i,m+1){
        cin >> arr[i];
    }
    string fedor = convert_to_bit(arr[m],n);
    int result = 0;
    loop(i,m){
        if(difference(convert_to_bit(arr[i],n),fedor, n)<=k) result++;
    }   

    cout <<result;
}
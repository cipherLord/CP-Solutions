#include "bits/stdc++.h"

using namespace std;

bool isDuplicate(vector <int> v, int x)
{
    for (auto it =v.begin(); it != v.end(); it++)
    {
        if(*it==x) return true;
    }
    return false;
}

int main(){

    vector <int> v;

    int n,p,q;
    cin >>n >> p;
    int x;

    for(int i =0 ; i<p ; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >>q;
        
    for(int i =0 ; i<q ; i++)
    {
        cin >> x;
        if(!isDuplicate(v,x)) v.push_back(x);
    }

    if(v.size()!=n) cout << "Oh, my keyboard!";
    else cout << "I become the guy.";

    
}
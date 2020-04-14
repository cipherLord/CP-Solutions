#include<bits/stdc++.h>

using namespace std;

int min(int m, int n)
{
    if (m<=n) return m;
    return n; 
}

int main(){

    int m,n;
    cin >>m>>n;
    if(min(m,n) %2==0) cout << "Malvika";
    else cout << "Akshat";

}
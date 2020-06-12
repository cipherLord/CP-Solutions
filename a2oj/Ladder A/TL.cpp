#include "bits/stdc++.h"

using namespace std;

int main(){

    int n,m;
    cin >> n>> m;

    int a[n], b[m];

    for (int i =0 ; i< n ;i++)
    {
        cin >> a[i];
    }

    for (int i=0 ; i<m; i++)
    {
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b,b+m);

    int max_a = a[n-1];
    int min_b = b[0];
    int min_a = a[0];

    for (int i=max_a; i< min_b; i++)
    {
        if(2*min_a <= i){
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
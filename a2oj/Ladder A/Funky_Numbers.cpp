#include "bits/stdc++.h"
#define ll long long int
using namespace std;


int main()
{
    ll input;
    cin >> input;

    for (ll i = 1 ; i < int(sqrt(2*input)); i++)
    {
        ll temp = 2*input - i*(i+1);
        if (temp == int(sqrt(temp))*(int(sqrt(temp)) +1)) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
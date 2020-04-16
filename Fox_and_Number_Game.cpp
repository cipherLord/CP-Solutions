#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return GCD  (b % a, a); 
} 


int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i =0; i<n ;i ++)
    {
        cin >>arr[i];
    }

    int result =arr[0];

    for (int i=1; i<n ;i ++)
    {
        result = GCD(arr[i],result);
    }

    cout << result * n;

}
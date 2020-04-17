#include "bits/stdc++.h"

using namespace std;

bool isThere(int a, int arr[] , int n)
{
    for (int i=0; i < n; i++)
    {
        if ( arr[i] == a)return true; 
    }
    return false;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i =0 ; i<n ;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    for (int i =1 ; i <= 3003; i++)
    {
        if (!isThere(i,arr,n))
        {
            cout << i;
            return 0;
        }
    }

}
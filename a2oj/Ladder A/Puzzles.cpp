#include "bits/stdc++.h"

using namespace std;

int check_diff (int m, int n, int arr[]){

    int sum = INT16_MAX;
    int sum2 = 0 ;
    for (int i=0;i<n - m + 1;i++)
    {
        sum2 = arr[i+m-1] -arr[i];
        if(sum2<sum) sum = sum2;
    }
    return sum;
}

int main(){
    int m,n;
    cin >> m>>n ;

    int arr[n];
    for (int i =0 ; i< n ; i++){

        cin >> arr[i];
    }

    sort(arr,arr+n);

    // for (int i=0; i<n; i++){cout << arr[i]<< " ";}

    int sum = check_diff(m,n,arr);
    cout << sum;


}
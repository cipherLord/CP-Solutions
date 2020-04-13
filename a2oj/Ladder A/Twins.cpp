#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    int sum =0;

    int arr[n];

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr , arr +n , greater<int>());
    int sum2 = 0;

    for (int i=0 ; i < n ;i++)
    {
        sum2 += arr[i];

        if (sum2 > sum - sum2){
            cout << i+1;
            break;
        }

    }
    return 0;
}


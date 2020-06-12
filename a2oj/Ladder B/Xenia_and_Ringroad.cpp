#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int n, m;
    int arr[100010];
    int task = 1;
    int pos = 1;
    ll ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++){
        cin >> arr[i];
    }
    int curr = 1;
    for (int i = 1; i <= m; i++){
        if (curr < arr[i]){ // if less  
            ans += arr[i]-curr;
        }
        else if (curr > arr[i]){
            ans += (n - curr) + arr[i];
        }
        curr = arr[i];
    }
    cout << ans << endl;
 
    return 0;
}
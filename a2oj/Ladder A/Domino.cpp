#include "bits/stdc++.h"

using namespace std;

void swap (int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}


int main(){

    int n;
    cin >>n;

    int a[n],b[n];
    int upperSum =0 , lowerSum=0;
    int count = 0;

    for(int i =0 ; i<n ;i++)
    {
        cin >> a[i] >>b[i];
        upperSum += a[i];
        lowerSum += b[i];
    }

    if (upperSum %2 ==0 && lowerSum %2 ==0) cout<< "0";

    else if ((upperSum + lowerSum)%2 !=0)cout << "-1";

    else {
        for (int i=0; i<n; i++){
            if((a[i] + b[i])%2 !=0)
            {
                cout << "1";
                return 0;
            }
        }
        cout << "-1"; 
    } 
}
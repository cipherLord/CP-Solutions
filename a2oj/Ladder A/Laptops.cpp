#include<bits/stdc++.h>

using namespace std;

struct laptop{

    int price;
    int quality;
};

bool comparator (laptop l1 , laptop l2)
{
    return (l1.price < l2.price);
}

int main(){

    int n;

    cin >>n;

    laptop arr[n];

    for (int i =0; i<n ;i++)
    {
        cin >> arr[i].price >> arr[i].quality;
    }

    sort (arr,arr+n,comparator);

    for (int i=0 ;i<n-1 ; i++){
        if (arr[i].quality > arr[i+1].quality)
        {
            cout << "Happy Alex";
            return 0;
        }
        
    }

    cout << "Poor Alex";
    return 0;

}
#include <bits/stdc++.h>

using namespace std;

int petricium (long double k, long double l, int count){
    
    if (l/k > 1){
        count ++;
        petricium(k,l/k, count);
    }

    else if(l/k < 1){
        count = -1;
        return count;
    }

    else return count;
}


int main()
{
    long double k,l;
    cin >>k>>l;
    int count =0;

    int cnt = petricium (k,l,count);

    if (cnt == -1) cout << "NO";

    else
    {
        cout << "YES"<<endl;
        cout << cnt;
    }

    
}
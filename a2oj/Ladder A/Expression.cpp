#include "bits/stdc++.h"

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    int count = a+b+c;
    if((a+b)*c > count) count = (a+b)*c;
    if(a+(b*c) > count) count = a+(b*c);
    if(a*b*c > count) count = a*b*c;
    if(a*(b+c) > count) count = a*(b+c);

    cout << count;



}
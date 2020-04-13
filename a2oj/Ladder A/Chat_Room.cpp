#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >>s;

    int count =0;

    int iter =0;

    while (iter < s.length())
    {
        switch (count)
        {
        case 0 :
            if(s[iter] == 'h') count = 1 ;
            break;

        case 1:
            if(s[iter] == 'e') count = 2 ;
            break;

        case 2 :
            if(s[iter] == 'l') count = 3 ;
            break;

        case 3 :
            if(s[iter] == 'l') count = 4 ;
            break;

        case 4 :
            if(s[iter] == 'o') count = 5;
            break;        
        default:
            break;
        }
        
        iter++;
    }
    if (count == 5) cout << "YES";
    else cout << "NO";
}
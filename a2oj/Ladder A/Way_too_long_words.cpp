#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        string lenc = to_string(len - 2);

        if (len > 10)
        {
            cout << s[0] + lenc + s[len-1];
        }

        else cout << s;

        cout << "\n";
    }


    
    return 0;
}
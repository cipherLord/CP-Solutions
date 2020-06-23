#include"bits/stdc++.h"

#define loop(i,n) for (int i = 0; i < n; ++i) 
#define looprev(i,n) for (int i=n-1; i>=0 ; --i)
#define LOOP(i,k,n) for (int i = k; i <= n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<char>
#define vec2D vector <int<int>>
#define ll long long
#define ld long double

using namespace std;

bool check(string s, string t){

    int found = -1;
    string temp;
    loop(i,(int)t.size()){
        found = s.find(t[i],0);
        if(temp.find((char)found,0)!= string::npos) found = s.find(t[i],found+1);

        if (found == string::npos) return false;
        temp = temp + (char)found;
    }
    return true;
}

bool isSubSequence(string str1, string str2, int m, int n) 
{ 

    if (m == 0) return true; 
    if (n == 0) return false; 

    if (str1[m-1] == str2[n-1]) 
       { return isSubSequence(str1, str2, m-1, n-1); }
  

    return isSubSequence(str1, str2, m, n-1); 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, t;
    cin >> s >> t;
    if(!check(s,t) || s.compare(t)==0) cout << "need tree";
    else{
        if(s.size() == t.size()) cout << "array";

        else{
            
            if(isSubSequence(t,s,t.length(),s.length()))cout << "automaton";
            else cout << "both";   

        }
    }
}
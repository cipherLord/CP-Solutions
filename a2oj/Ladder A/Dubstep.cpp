#include "bits/stdc++.h"

using namespace std;

string trim(string s){

    for(int i=0; i<s.length();i++)
    {
        if(s[i]==NULL && s[i+1] ==' ') s[i+1] =NULL;
    }
    if(s[0]== ' ')s[0]= NULL;
    return s;
}

int main(){

    string s;
    cin >>s;

    for (int i =0 ; i<s.length() ; i++)
    {
        if(s[i] == 'W' && s[i+1]=='U' && s[i+2] =='B')
        {
            s[i]=' ' ,s[i+1]=NULL,s[i+2]=NULL;
        }
    }
    string trimmed = trim(s);

    for(int i=0; i < trimmed.length(); i++){
        if(trimmed[i]!=NULL)cout <<trimmed[i];
    }

    return 0;
}
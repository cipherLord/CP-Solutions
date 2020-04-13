#include<bits/stdc++.h>

using namespace std;

int tl(char x)
{
    x = tolower(x);
    return x;
}

int main(){

    string s;
    cin >>s;

    int len = s.length();

    for(int it = 0; it <len ; it++)
    {
        if(tl(s[it]) == 'a' || tl(s[it]) == 'e' || tl(s[it]) == 'i' || tl(s[it]) == 'o' || tl(s[it]) == 'u'|| tl(s[it])== 'y') 
            s[it]= NULL;
        else if ((int)s[it] > 64 && (int)s[it] <91)
            s[it]= tl(s[it]);
        
    }

    string result;

    for (int it =0; it <s.length() ; it ++)
    {   
        if(s[it] != NULL)
        result = result + "." + s[it];
    }

    cout <<result;
}
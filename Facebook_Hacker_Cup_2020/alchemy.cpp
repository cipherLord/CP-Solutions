#include"bits/stdc++.h"

#define fastio ios_base::sync_with_stdio(false)

using namespace std;

int main(){
    
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream infile;
    infile.open("alchemy_validation_input.txt");
    ofstream outfile;
    outfile.open("alchemy_output.txt");

    int t;
    infile >> t;
    int x =1;

    while(x!=t+1){
        int n;
        infile >> n;
        int countA=0,countB =0;
        string c;
        infile >> c;
        for(int i =0; i<n;i++){
            if(c[i]=='A')countA++;
            else countB++;
        }
        if(x!=t){
            if(abs(countB-countA)==1) outfile <<"Case #"<<x<<": "<<'Y'<<endl;
            else outfile <<"Case #"<<x<<": "<<'N'<<endl;
        }
        else {
            if(abs(countB-countA)==1) outfile <<"Case #"<<x<<": "<<'Y';
            else outfile <<"Case #"<<x<<": "<<'N';
        }
        x++;
    }
    outfile.close();
    infile.close();
    return 0;
}
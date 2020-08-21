#include"bits/stdc++.h"

#define fastio ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    fastio;
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream infile;
    infile.open("travel_restrictions_input.txt");
    ofstream outfile;
    outfile.open("travel_output.txt");
    int t;
    infile >> t;
    int x = 1;
    while (x!=t+1){
        int n;
        infile >> n;
        string incom, outgo;

        infile >> incom >> outgo;

        vector<vector<char>> dp(n,vector<char>(n,'N'));

        for(int i = 0; i < n ;i++){
            if(outgo[i]=='N'){
                for(int j =0; j<n; j++){
                    if(j==i)dp[i][j]='Y';
                    else continue;
                }
            }
            else{
                int left, right;
                dp[i][i]='Y';
                for(left =i-1; left>=0;left--){
                    if(incom[left]=='N'){
                        while(left>=0) left--;
                    }
                    else if (outgo[left]=='N' && left!=0){
                        dp[i][left] = 'Y';
                        while(left>0) left--;
                    }
                    else dp[i][left] = 'Y';
                }

                for(right =i+1; right<n;right++){
                    if(incom[right]=='N'){
                        while(right<=n-1) right++;
                    }
                    else if (outgo[right]=='N' && right!=n-1){
                        dp[i][right] = 'Y';
                        while(right<n-1) right++;
                    }
                    else dp[i][right] = 'Y';
                }
            }
        }
        outfile<<"Case #"<<x<<":"<<endl;
        for(int i =0; i <n ; i++){
            string s ="";
            for(int j =0; j < n; j++){
                s+= dp[i][j];
            }
            outfile << s<<endl; 
        }
        x++;
    }
    outfile.close();
    infile.close();
    return 0;
}
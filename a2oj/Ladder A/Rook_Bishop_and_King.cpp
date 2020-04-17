#include "bits/stdc++.h"

using namespace std;

int rook(int x1,int y1,int x2, int y2){

    if( y2 - y1 == 0 || x2 - x1 == 0) return 1;
    else return 2;

}

int bishop(int x1,int y1,int x2, int y2)
{   
    if((abs(x2 - x1) + abs(y2-y1))%2 !=0) return 0;
    else if (x2-x1 ==0 || y2 - y1 ==0) return 2;
    else if (fabs(float((y2-y1)/(x2-x1))) == 1 ) return 1;
    else return 2;
}

int king(int x1,int y1,int x2, int y2)
{
    int moves = 0;
    if (x2-x1 == 0) return abs(y2 -y1);
    else if(y2-y1 == 0) return abs(x2-x1);
    else if(abs((y2 - y1)) == abs((x2 - x1)))return abs(x2-x1);
    else{
        if(abs(y2-y1) > abs(x2-x1)){
            if(y2>y1){
                y1++;
                moves = moves + 1 + king(x1,y1,x2,y2);
            }
            else {
                y1--;
                moves = moves + 1 + king(x1,y1,x2,y2);;
            }
        }
        else{
            if(x2>x1){
                x1++;
                moves = moves + 1 + king(x1,y1,x2,y2);
            }
            else {
                x1--;
                moves = moves + 1 + king(x1,y1,x2,y2);;
            }
        }
        return moves;
    }
}

int main ()
{ 
    int x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout << rook(x1,y1,x2,y2) << " "<< bishop(x1,y1,x2,y2) << " " << king(x1,y1,x2,y2);

}
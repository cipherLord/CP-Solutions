#include <bits/stdc++.h>
#include<queue>
#include <math.h>

using namespace std;

#define LoopA(i,p,max,k) for(auto i=p;i<max;i=i+k)
#define LoopS(i,p,min,k) for(auto i=p;i>=min;i=i-k)
#define LoopIt(V) for(itr=V.begin();itr != V.end();++itr)
#define in std::cin
#define out std::cout
#define vec(datatype) std::vector<datatype>
#define pb(val) push_back(val)
#define Vcount(V,val) count(V.begin(), V.end(), val)
#define Vmin(V) *min_element(V.begin(), V.end())
#define Vmax(V) *max_element(V.begin(), V.end())
#define Vsort(V) sort(V.begin(), V.end())
#define Vsw(A,B) std::swap(A,B)
#define ignore in.ignore()
#define Vfind(V,val) std::find (V.begin(), V.end(), val)-V.begin()
#define Vdistinct(V) Vsort(V); V.erase( unique( V.begin(), V.end() ), V.end() )
#define vecP(datatype1,datatype2) std::vector<pair<datatype1,datatype2>>
#define Pmp(A,B) make_pair(A,B)
#define PF first
#define PS second
#define nitro ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define paINT pair<int,int>
#define PQA(datatype) priority_queue <datatype, vector<datatype>, greater<datatype>>
#define PQD(datatype) priority_queue <datatype>

typedef long int li;
typedef long long int lli;
typedef long double ld;

int main()
{

	nitro;

	int T;
	in>>T;

	while(T--)
	{

		int H,P;
		in>>H>>P;

		int h = H, p = P;
		int i = 0;

		while( i == 0 )
		{

			if( p == 0 && h > 0 )
			{
				out<<"0\n";
				break;
			}
			else if( h <= 0 && p >= 0 )
			{
				out<<"1\n";
				break;
			}

			h = h - p;
			p = p / 2;

		}

	}

	return 0;

}
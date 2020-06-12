#include <bits/stdc++.h>

using namespace std;

int mostFrequent(int arr[], int n) 
{ 
    // Insert all elements in hash. 
    unordered_map<int, int> hash; 
    for (int i = 0; i < n; i++) 
        hash[arr[i]]++; 
  
    // find the max frequency 
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 
} 
int frequency(int a[], int n, int x) 
{ 
    int count = 0; 
    for (int i=0; i < n; i++) 
       if (a[i] == x)  
          count++; 
    return count; 
} 

int main(){


	int n;
	cin >>n;
	int arr[n];


	for (int i=0; i<n ;i ++)
	{
		cin >>arr[i];
	}	

	int mF = mostFrequent(arr,n);

	if(n%2 ==0){
		
		if (frequency(arr,n,mF) > n/2){
			cout <<"NO";
		}
		else cout << "YES";
	}

	else {
		if (frequency(arr,n,mF) > n/2 + 1){
			cout <<"NO";
		}
		else cout << "YES";
	}

}
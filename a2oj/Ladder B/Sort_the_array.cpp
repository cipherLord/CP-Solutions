#include"bits/stdc++.h"

#define loop(i,n) for (ll i = 0; i < n; ++i) 
#define LOOP(i,k,n) for (ll i = k; i < n; ++i) 
#define LOOPREV(i,k,n) for (int i = k; i >= n; --i) 
#define mp make_pair(x,y)
#define pa pair <int,int>
#define vec vector<int>
#define vec2D vector <int<int>>
#define ll long long
#define ld long double

using namespace std;

const int N = (int) 1e5 + 5;
int a[N], b[N];
 
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	map<int, int> google;
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		google[b[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		a[i] = google[a[i]];
	}
	int left = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] != i) {
			left = i;
			break;
		}
	}
	int right = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != i) {
			right = i;
			break;
		}
	}
	if (left == -1 || right == -1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(a + left, a + right + 1);
		int check = true;
		for (int i = 0; i < n; i++) {
			if (a[i] != i) {
				check = false;
			}
		}
		if (check) {
			cout << "yes" << endl;
			cout << left + 1 << " " << right + 1 << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}
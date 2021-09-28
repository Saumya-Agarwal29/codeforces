#include <bits/stdc++.h>

using namespace std;

string t;
long long nb, ns, nc, pb, ps, pc, r, b, s, c;

bool f(long long n){
	long long p = max(0ll, (n*b - nb)) * pb + max(0ll, (n*s - ns)) * ps + max(0ll, (n*c - nc)) * pc;
	return p <= r;
}

int main(){
	cin >> t;
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
	for (int i = 0; i < t.size(); i++){
		if (t[i] == 'B')
			b++;
		else if (t[i] == 'S')
			s++;
		else
			c++;
	}

	
	long long low = 0, high = 2 * 1e12;
	while (high - low > 1){
		long long mid = (low + high)>>1;
		if (f(mid))
			low = mid;
		else
			high = mid;
	}

	cout << low << endl;	
	return 0;
}

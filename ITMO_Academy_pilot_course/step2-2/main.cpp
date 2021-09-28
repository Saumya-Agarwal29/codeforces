#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4+10;

int n, k, a[maxn];

bool f(double x){
	long long t = 0;
	for (int i = 0; i < n; i++){
		t += floor((double)(a[i])/x);
	}

	return t >= k;
}

int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];


	
	double low = 0, high = 1e7+10;
	
	for (int i = 0; i < 60; i++){
		double mid = (low + high)/2;
		if (f(mid))
			low = mid;
		else
			high = mid;
	}

	cout << setprecision(6) << fixed << low << endl;
	return 0;
}

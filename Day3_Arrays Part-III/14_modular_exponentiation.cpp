#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	
	long long ans = 1;
	long long nn = n;
	long long X=x;
	while (nn) {

		if (nn % 2) {
		ans = (ans%m * X%m)%m;
		nn = nn - 1;
		} 

		else {
		X = (X%m * X%m)%m;
		nn = nn / 2;
		}
	}
	return ans%m;

}
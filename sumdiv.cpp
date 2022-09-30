#include <bits/stdc++.h>
#include <math.h>
using namespace std;
long long sumc(long long n){
	long long sum = 0;
	for(int i = 1; i <= trunc(sqrt(n)); i++){
		if (n % i == 0) sum += i + n / i;
		if (pow(i, 2) == n) sum -= i;
	}
	return sum;
}
 
int main() {
	// your code goes here
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		long long n; cin >> n;
		cout << sumc(n) << endl;
	}
	return 0;
}  

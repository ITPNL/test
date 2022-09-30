Prefix sum
```sh
#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int main(){
	freopen("TEST.INP", "r", stdin);
	freopen("TEST.OUT", "w", stdout);
	int A[1000], F[1000], T, n;
	cin>>n;
	A[0] = 0, F[0] = 0;
	for (int i = 1; i <= n; i++){
		cin>>A[i];
		F[i] = F[i-1] + A[i];
	}
	cin>>T;
	while(T--){
		int v, u;
		cin>>u>>v;
		cout<<F[v] - F[u-1]<<endl;
	}
}
```
Vấn đề:
- Đưa ra tổng của bất kì dãy con nào với O(1)

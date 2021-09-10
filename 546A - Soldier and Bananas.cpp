#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	int k,n,w,ans=0;cin >> k >> n >> w;
	for(int i=1;i<=w;i++)ans += (i * k);
	cout << (n >= ans ? 0 : ans - n);
}

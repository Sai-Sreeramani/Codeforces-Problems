
#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main(){
	int n,ans=0;cin >> n;
	while(n--){
		int a,b,c,cnt=0;cin >> a >> b >> c;
		cnt += (a == 1) + (b == 1) + (c == 1);
		ans += (cnt >= 2);
	}
	cout << ans;
}

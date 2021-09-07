
#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main(){
	int n,ans=0;cin >> n;
	while(n--){
		int a,b,c;cin >> a >> b >> c;
		ans += (a + b + c > 1);
	}
	cout << ans;
}

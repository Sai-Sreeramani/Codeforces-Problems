#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	int ans=0,n;cin >> n;
	while(n--){
		string s;cin >> s;
		(s[0] == '+' || s[s.size()-1] == '+') ? ans++ : ans--;
	}
	cout << ans;
}

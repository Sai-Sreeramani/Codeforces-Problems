#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	int n,ans=0;string s;cin >> n >> s;
	for(int i=0;i<s.size()-1;i++){
		ans += (s[i] == s[i+1]);
	}
	cout << ans;
}

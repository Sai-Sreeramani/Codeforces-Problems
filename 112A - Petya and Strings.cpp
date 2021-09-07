#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	int ans = 0;string a,b;cin >> a >> b;
	for(int i=0;i<a.size();i++){
		if(tolower(a[i]) - 'a' > tolower(b[i]) - 'a'){
			cout << 1;ans++;break;
		}
		if(tolower(a[i]) - 'a' < tolower(b[i]) - 'a'){
			cout << -1;ans++;break;
		}
	}	
	if(ans==0)cout << 0;
}

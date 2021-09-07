#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	int n;cin >> n;
	while(n--){
		string s;cin >> s;
		cout << (s.size() <= 10 ? s : s[0]+to_string(s.size()-2)+s[s.size()-1]) << endl;
	}
}

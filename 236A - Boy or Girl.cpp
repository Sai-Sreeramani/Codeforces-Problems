#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	string s;cin >> s;set<char> s1;
	for(int i=0;i<s.size();i++){
		s1.insert(s[i]);
	}
	cout << (s1.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}

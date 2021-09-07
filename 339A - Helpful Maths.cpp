#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	string s,tmp="";cin >> s;vector<int> v{0,0,0};
	for(int i=0;i<s.size();i++){
		v[0] += (s[i] == '1');
		v[1] += (s[i] == '2');
		v[2] += (s[i] == '3');
	}
	for(int i=0;i<v[0];i++){
		tmp += "1+";
	}
	for(int i=0;i<v[1];i++){
		tmp += "2+";
	}
	for(int i=0;i<v[2];i++){
		tmp += "3+";
	}
	for(int i=0;i<tmp.size()-1;i++){
		cout << tmp[i];
	}
}

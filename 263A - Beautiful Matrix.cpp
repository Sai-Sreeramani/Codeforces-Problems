#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	int ans = 0;char dp[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> dp[i][j];
			if(dp[i][j] == '1')ans += abs(i-2) + abs(j-2);
		}
	}
	cout << ans;
}

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	int n,k,ans=0;cin >> n >> k;vector<int> v(n);
	for(int i=0;i<n;i++)cin >> v[i];
  for(int i=0;i<n;i++){
    ans += (v[i] >= v[k-1] && v[i] != 0);
  }
  cout << ans;
}

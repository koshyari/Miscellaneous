#include <bits/stdc++.h>

#define vi vector<int>
#define pii pair<int, int>
using namespace std;

vi freq_sort(vi &V){
	vi ans;
	unordered_map <int, int> m;

	for(int i = 0; i < V.size(); ++i){
		m[V[i]]++;
	}

	priority_queue <pii, vector<pii>, greater<pii>> minh;

	for(auto it = m.begin(); it != m.end(); it++){
		minh.push(make_pair(it -> second, it -> first));
	}

	while(!minh.empty()){
		int freq = minh.top().first;
		int val = minh.top().second;
		for(int i = 0; i < freq; ++i) ans.push_back(val);
		minh.pop();
	}
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);	
#endif
	vi V;
	int x;
	while(cin >> x){
		V.push_back(x);
	}
	
	vi ans = freq_sort(V);	
	for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";

	return 0;
}


    #include <bits/stdc++.h>

    using namespace std;

    #define SYNC ios_base::sync_with_stdio(false); cin.tie(0)
    #define all(a) a.begin(), a.end()
    #define pb push_back
    #define endl '\n'
    #define vi vector<int>
    #define pii pair<int, int>
    #define mp make_pair

    using ll = long long int;    
    const int MOD = (int)1e9 + 7, inf = 1e9; 
    //========================================================

    int n;			
    vector<int> a;
    vector<bool> vis;
    vector<multiset<int>> adj;
    queue <int> q;
    bool flag;

    void bfs(int start){
        q.push(start);
        while(!q.empty()){
            int f = q.front();
	    q.pop();
            vis[f] = true;
            cout << f << " ";

            for(auto i : adj[f]){
                if(vis[i] == false){
                    q.push(i);
                }
            }
        }

    }

    int32_t main(){SYNC;

        cin >> n;
        adj.resize(n + 1);
        a.resize(n);
        vis.resize(n + 1, false);

        for(int i = 1; i < n; ++i){
            int u, v; cin >> u >> v;
            adj[u].insert(v), adj[v].insert(u);
        }
	       
        bfs(1);

        return 0;
    }

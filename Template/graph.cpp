///////////////// ----- dp -----////////////////////////
// 1D dp: vector<int> dp(n + 1); dp[0] = 0; for (int i = 1; i <= n; ++i) { dp[i] = dp[i - 1] + 1; }
// 2D dp: vector<vector<int>> dp(n + 1, vector<int>(m + 1)); dp[0][0] = 0; for (int i = 1; i <= n; ++i) { for (int j = 1; j <= m; ++j) { dp[i][j] = dp[i - 1][j] + dp[i][j - 1]; } }
// 3D dp: vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1))); dp[0][0][0] = 0; for (int i = 1; i <= n; ++i) { for (int j = 1; j <= m; ++j) { for (int k = 1; k <= k; ++k) { dp[i][j][k] = dp[i - 1][j][k] + dp[i][j - 1][k] + dp[i][j][k - 1]; } } }

///////////////// ----- Graph -----////////////////////////
// Adjacency list: vector<vector<int>> adj(n + 1); for (int i = 0; i < m; ++i) { int u, v; cin >> u >> v; adj[u].push_back(v); adj[v].push_back(u); }
// Adjacency matrix: vector<vector<int>> adj(n + 1, vector<int>(n + 1)); for (int i = 0; i < m; ++i) { int u, v; cin >> u >> v; adj[u][v] = 1; adj[v][u] = 1; }
// BFS: vector<bool> visited(n + 1); queue<int> q; q.push(1); visited[1] = true; while (!q.empty()) { int u = q.front(); q.pop(); for (int v : adj[u]) { if (!visited[v]) { visited[v] = true; q.push(v); } } }
// DFS: vector<bool> visited(n + 1); function<void(int)> dfs = [&](int u) { visited[u] = true; for (int v : adj[u]) { if (!visited[v]) { dfs(v); } } }; dfs(1);
///////////////// ----- Heap -----////////////////////////
// Min heap: priority_queue<int, vector<int>, greater<int>> pq;
// Max heap: priority_queue<int> pq;
// Insert: pq.push(value);
// Get top: int top = pq.top();
// Remove top: pq.pop();
// Check if empty: bool isEmpty = pq.empty();
// Get size: int size = pq.size();

///////////////// ----- tree -----////////////////////////
// tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> t;
// Insert: t.insert(value);
// Remove: t.erase(value);
// Get kth smallest: int kthSmallest = *t.find_by_order(k - 1);
// Get number of elements less than x: int numLessThanX = t.order_of_key(x);

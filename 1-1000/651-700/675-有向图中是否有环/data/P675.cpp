#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110, M = 1010;

int n, m;
int h[N], to[M], ne[M], idx = 0;
int book[N];

//int res = 0;
bool flag = false;	// 初始值 没有环

void add(int a, int b) {
	to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int u) {
	
	if (flag) return;
	if (book[u] == 1) return;
	book[u] = -1;

	for (int i = h[u]; ~i; i = ne[i]) {
		int v = to[i];
		if (book[v] == -1) {
			flag = true;
			return;
		}
	
		dfs(v);
	}

	book[u] = 1;
}

int main() {
	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	memset(h, -1, sizeof h);

	cin >> n >> m;
	while (m--) {
		int a, b;
		cin >> a >> b;

		add(a, b);
		//add(b, a);
	}#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110, M = 1010;

int n, m, s, e;
int h[N], to[M], ne[M], idx = 0;
bool book[N];

bool flag = false;

void add(int a, int b){
    to[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int u, int pre){
    
    if(flag) return;
    if(book[u]) return;
    
    book[u] = true;
    
    for(int i = h[u]; ~i; i = ne[i]){
        int v = to[i];
        if(book[v] && v != pre){
            flag = true;
            return;
        }
        
        dfs(v, u);
    }
}

int main() {

    memset(h, -1, sizeof h);
    
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        
        add(a, b);
        add(b, a);
    }
    
    for(int i = 1; i <= n; i++)
        dfs(i, 0);
    
    cout << (flag? "yes": "no") << endl;

	return 0;
}

	for (int i = 1; i <= n; i++)
		dfs(i);


	cout << (flag ? "yes" : "no") << endl;

	return 0;
}

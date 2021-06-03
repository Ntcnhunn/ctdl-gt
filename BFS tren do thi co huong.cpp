#include<bits/stdc++.h>
using namespace std;
int n,m,u;
bool unused[1005];
vector<int>List[1005];

void BFS(int u){
	queue<int> q; q.push(u);
	unused[u]=false;
	cout<<u<<" ";
	while(!q.empty()){
		int x=q.front(); q.pop();
		for(int i=0; i<List[x].size(); i++){
			int v=List[x][i];
			if(unused[v]){
				q.push(v);
				cout<<v<<" ";
				unused[v]=false;
			}
		}
	}
}
main(){
	int t,x,y;
	cin>>t;
	while(t--){
		memset(unused,true,sizeof(unused));
		for(int i=0; i<1005; i++) List[i].clear();
		cin>>n>>m>>u;
		for(int i=1; i<=m; i++){
			cin>>x>>y;
			List[x].push_back(y);
		}
		BFS(u);
		cout<<endl;
	}
}

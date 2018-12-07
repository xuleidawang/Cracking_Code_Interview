#include <iostream>
#include <queue>
#include "Graph.h"



bool routeBetween(Graph g, int start, int end){
	if(start==end)return true;

	queue<int> q;
	vector<bool> visited(g.adj.size(),false);

	visited[start]=true;

	q.push(start);

	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		if(tmp==end)return true;
		visited[tmp] = true;

		for(auto& i:g.adj[tmp]){
			if(!visited[i])
				q.push(i);
		}

	}
	return false;

}


int main(){
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int V = 10;
vector<int> vec[V];
int visited[V];
	
void go(int from){
	cout << from << '\n';
	visited[from] = 1;
	for(int i: vec[from]){
		if(visited[i]) continue;
		go(i);
	}
}
int main(){

	vec[1].push_back(2);
	vec[1].push_back(3);
	
	vec[2].push_back(1);
	
	vec[3].push_back(1);
	vec[3].push_back(4);
	
	for(int i = 0; i < V; i ++){
		if(vec[i].size() && visited[i] == 0){
			go(i);
		}
	}
} 

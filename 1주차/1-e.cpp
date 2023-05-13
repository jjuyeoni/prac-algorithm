// น้มุ 1159
// https://www.acmicpc.net/problem/1159

#include <bits/stdc++.h>
using namespace std; 

int num;
vector<string> players;

void solve(){
	for(int i = 0; i < 5; i++)
		players
}
void print(){
	for(int i = 0; i < 5; i++)
		cout << players[i] << '\n';
}
void makePermutation(int n, int r, int depth){
	if(r==depth){
		print();
		return;
	}
//	sort(players);
	for(int i = 0; i < n; i++){
		swap(players[i],players[depth]);
		makePermutation(n,r,depth+1);
		swap(players[i],players[depth]);
	}
}
int main(){	
	string str;
	cin >> num;
	for(int i = 0; i < num; i++){
		cin >> str;
		players.push_back(str);
	}
	makePermutation(num,5,0);
}

/*
지도 문제가 나올때는 지도 기반으로 풀어야함! 
-> 인접리스트나 인접 행렬로 바꾸기 X 

상/하/좌/우 탐색용 좌표 
dy[] = {-1,0,1,0}
dx[] = {0,1,0,-1}

ny = y + dy[i]
nx = x + dx[i] 
*/


#include<bits/stdc++.h>
using namespace std;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

const int dyy[] = {-1,-1, 0, 1, 1, 1, 0, -1};
const int dxx[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(){
	int y = 0, x = 0;
	// 4방향인 경우	 
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		cout << ny << " , " << nx << '\n';
	}
	
	// 8방향인 경우	 
	for(int i = 0; i < 8; i++){
		int ny = y + dyy[i];
		int nx = x + dxx[i];
		cout << ny << " , " << nx << '\n';
	}
	
	return 0;
}

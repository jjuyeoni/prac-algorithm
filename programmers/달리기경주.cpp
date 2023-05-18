//https://school.programmers.co.kr/learn/courses/30/lessons/178871
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    for(int i = 0; i < callings.size(); i++){
        for(int j = 0; j < players.size(); j++){
            if(callings[i]==players[j]) {
                swap(players[j-1],players[j]);
                break;
            }
        }
    }
    return players;
}

//https://school.programmers.co.kr/learn/courses/30/lessons/176963

#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> mp;
    int sum = 0;
    
    for(int i = 0; i < name.size(); i++){
        mp.insert({name[i], i+1});
        mp[name[i]] = yearning[i];
    }
    
    for(int i = 0; i < photo.size(); i++){
        sum = 0;
        for(int j = 0; j < photo[i].size(); j++){
            sum += mp[photo[i][j]];
        }
        answer.push_back(sum);
    }
    
    return answer;
}

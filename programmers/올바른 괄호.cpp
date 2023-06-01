//https://school.programmers.co.kr/learn/courses/30/lessons/12909
#include<string>
#include <iostream>
#include<vector>
using namespace std;

bool solution(string s){
    ios_base::sync_with_stdio(0);
    
    bool answer = true;
    vector<int> a;
    for(int i = 0; i < s.size(); i++){
        if(i == 0 && s[i] == ')'){
            answer = false;
            break;
        }
        if(s[s.size()-1]=='('){
            answer = false;
            break;
        }
        if(a.size() == 0 && s[i] == ')'){
            answer = false;
            break;
        }
        if(s[i] == '(') a.push_back(1);
        else a.pop_back();
    }
    if(a.size()) answer = false;
    return answer;
}

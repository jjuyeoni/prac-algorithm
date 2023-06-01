//https://school.programmers.co.kr/learn/courses/30/lessons/12939

#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string solution(string s) {
    string answer = "";
    string temp = "";
    vector<int> numbers;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            numbers.push_back(stoi(temp));
            temp="";
            continue;
        }
        temp += s[i];
    }
    numbers.push_back(stoi(temp));
    sort(numbers.begin(),numbers.end());
    
    answer+= to_string(numbers.front());
    answer+= " ";
    answer+= to_string(numbers.back());
    
    return answer;
}

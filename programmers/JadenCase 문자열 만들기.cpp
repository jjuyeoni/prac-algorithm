//https://school.programmers.co.kr/learn/courses/30/lessons/12951

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int flag = 1; // 첫번째 글자일때 1

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            answer += s[i];
            flag = 1; 
            continue;
        }
        if(flag == 1){
            if(s[i] >= 97) answer += (s[i] - 32);
            else answer += s[i];
            flag = 0;
        }
        else if(flag == 0){
            if(s[i] >= 65 && s[i] < 97) answer += (s[i] + 32);
            else
                answer += s[i];
        }  
    }
    return answer;
}

#include <string>
#include <vector>

using namespace std;

int sum, start;
int solution(int n) {
    int cnt = 1;
    for(int i = 1; i < n; i ++){
        start = i;
        sum = 0;
        while(true){
            sum += start;
            if(sum > n) break;
            else if(sum == n){
                cnt ++;
                break;
            }
            start ++;
        }
    }
    return cnt;
}

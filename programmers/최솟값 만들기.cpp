#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum;
int solution(vector<int> A, vector<int> B){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i = 0; i < A.size(); i++){
        sum += A[i] * B[B.size()-(i+1)];
    }
    return sum;
}

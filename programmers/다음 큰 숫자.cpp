#include<bits/stdc++.h>
using namespace std;

int makeNum(int n){
    int cnt = 0;
    
    bitset<32> bits(n);
    auto num = bits.to_string();
    for(int i = 0; i < num.size(); i++){
        if(num[i] == '1') cnt++;
    }
    return cnt;
}

int solution(int n) {
    int a = makeNum(n); 
    int i = 1;
    while (true){
        int b = makeNum(n+i);
        if( a == b) break;
        i++;
    }
    return n+i;
}

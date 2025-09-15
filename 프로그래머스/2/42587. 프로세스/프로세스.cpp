#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct process {
    int idx; 
    int rank;
};


int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<process> q;
    
    // 우선순위 복사
    for(int i = 0; i < priorities.size(); i++) {
        process pro;
        pro.idx = i;
        pro.rank = priorities[i];
        
        q.push(pro);
    }
    
    // 우선순위 정렬
    sort(priorities.begin(), priorities.end());
    
    while(1) {
        process cur = q.front();
        
        if(cur.rank == priorities.back()) {
            answer++;
            
            // 원하는 프로세스인 경우
            if(cur.idx == location) 
                break;
            
            priorities.pop_back();
        }
        
        q.pop();
        q.push(cur);
    }
    
    
    return answer;
}
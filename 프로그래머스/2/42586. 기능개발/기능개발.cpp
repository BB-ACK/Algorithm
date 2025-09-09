#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> stack;
    
    
    for(int i = 0; i < progresses.size(); i++) {
        int progress = 100 - progresses[i];
        int speed = speeds[i];
        
        int day = 0;
        
        // 배포가능한 날짜 
        if(progress % speed == 0) 
            day = progress / speed;
        else
            day = progress / speed + 1;
        
        if(i == 0) {
            stack.push_back(day);
            answer.push_back(1);
            continue;
        }
        
        
        if(stack.back() >= day) {
            answer[answer.size()-1]++;
        }
        else {
            answer.push_back(1);
            stack.push_back(day);
        }
        
        
    }
    
    return answer;
}
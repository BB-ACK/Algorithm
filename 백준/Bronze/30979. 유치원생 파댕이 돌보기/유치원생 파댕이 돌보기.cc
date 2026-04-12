#include <iostream>
using namespace std;

int main() {
    int time; cin >> time;
    int candy; cin >> candy;
    
    int sum = 0;
    for(int i = 0; i < candy; i++) {
        int flavor; cin >> flavor;
        sum += flavor;
    }
    
    if(sum >= time)
        cout << "Padaeng_i Happy";
    else
        cout << "Padaeng_i Cry";
    
    return 0;
}
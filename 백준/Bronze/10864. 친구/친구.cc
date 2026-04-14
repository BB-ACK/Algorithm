#include <iostream>
#include <vector>
using namespace std;

int main() {
    int student; int relation;
    cin >> student >> relation;
    
    vector<vector<int>> arr(student+1);
    
    while(relation--) {
        int a, b; cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    
    for(int i = 1; i <= student; i++) {
        cout << arr[i].size() << '\n';
    }
    
    return 0;
}
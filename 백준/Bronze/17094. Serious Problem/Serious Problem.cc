#include <iostream>
#include <string>
using namespace std;

int main() {
    int num; cin >> num;
    string word; cin >> word;
    
    int num2 = 0, numE = 0;
    for(char c : word) {
        if(c == '2') num2++;
        else numE++;
    }
    
    if(num2 == numE) cout << "yee";
    else if(num2 > numE) cout << '2';
    else cout << 'e';
    
    return 0;
}
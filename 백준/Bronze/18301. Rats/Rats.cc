#include <iostream>
using namespace std;

int main() {
    float n1, n2, n12;
    cin >> n1 >> n2 >> n12;
    
    float result = (n1+1) * (n2+1) / (n12 + 1) - 1;
    
    cout << int(result);
    
    return 0;
}
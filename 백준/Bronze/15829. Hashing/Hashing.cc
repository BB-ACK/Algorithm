#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int hashFn(string word) {
    int r = 31;
    int result = 0;

    for(int i = 0; i < word.length(); i++) {
        int tmp = word[i] - 'a' + 1;
        result += tmp * pow(r, i);
    }

    return result;
}


int main() {
    int len; cin >> len;
    string word; cin >> word;

    cout << hashFn(word);

    return 0;
}
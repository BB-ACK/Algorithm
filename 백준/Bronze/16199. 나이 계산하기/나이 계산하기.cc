#include <iostream>
using namespace std;

int main() {
    int y1, m1, d1;
    int y2, m2, d2;

    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    int manAge;
    if (m2 > m1 || (m2 == m1 && d2 >= d1)) {
        manAge = y2 - y1;
    } else {
        manAge = y2 - y1 - 1;
    }

    int countAge = y2 - y1 + 1;

    int yearAge = y2 - y1;

    cout << manAge << '\n';
    cout << countAge << '\n';
    cout << yearAge << '\n';

    return 0;
}
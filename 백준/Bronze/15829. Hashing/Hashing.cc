#include <iostream>
#include <string>

using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L;
    cin >> L;
    string s;
    cin >> s;

    long long sum = 0;
    long long r_pow = 1; // r^i 값을 저장 (처음은 31^0 = 1)
    long long M = 1234567891;
    int r = 31;

    for (int i = 0; i < L; i++) {
        // 1. 문자를 숫자로 변환 (a=1, b=2, ...)
        int value = s[i] - 'a' + 1;

        // 2. 항을 계산하여 더함 (중간중간 M으로 나머지 연산 필수)
        // (value * r^i) % M 을 구해서 더함
        sum = (sum + (value * r_pow)) % M;

        // 3. 다음 항을 위해 r^i에 r을 곱함 (여기서도 M으로 나머지 연산)
        r_pow = (r_pow * r) % M;
    }

    cout << sum;

    return 0;
}
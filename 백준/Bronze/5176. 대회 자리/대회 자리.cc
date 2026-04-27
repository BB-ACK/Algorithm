#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int P, M;
    if (!(cin >> P >> M)) return;

    // 좌석 점유 상태를 저장할 배열 (1번부터 M번까지 사용)
    vector<bool> occupied(M + 1, false);
    int cannot_participate = 0;

    for (int i = 0; i < P; ++i) {
        int seat_num;
        cin >> seat_num;

        // 선택한 자리가 이미 차지되어 있는 경우
        if (occupied[seat_num]) {
            cannot_participate++;
        } else {
            // 자리가 비어 있으면 앉힘
            occupied[seat_num] = true;
        }
    }

    cout << cannot_participate << "\n";
}

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K;
    if (!(cin >> K)) return 0;

    while (K--) {
        solve();
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[51];

int WB_cnt(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != WB[i][j]) cnt++;
        }
    }
    return cnt;
}

int BW_cnt(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != BW[i][j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    int min_val = 65;
    pair<int, int> p1;

    cin >> p1.first >> p1.second;

    for (int i = 0; i < p1.first; i++) {
        cin >> board[i];
    }

    for (int i = 0; i + 8 <= p1.first; i++) {
        for (int j = 0; j + 8 <= p1.second; j++) {            
            min_val = min({ WB_cnt(i, j), BW_cnt(i, j), min_val});
        }
    }
    cout << min_val;

    return 0;
}
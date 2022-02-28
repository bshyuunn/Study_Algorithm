#include <iostream>
#include <algorithm>
using namespace std;

int maxCount = 0;

void countColumnCandy(char arr[51][51], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = 0; j < size; j++) {
                if (arr[i][j] == arr[i][j + 1])
                    count += 1;
                else {
                    maxCount = max(maxCount, count);
                    count = 1;
                }
            }
    }
}

void countRowCandy(char arr[51][51], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = 0; j < size; j++) {
            if (arr[j][i] == arr[j + 1][i])
                count += 1;
            else {
                maxCount = max(maxCount, count);
                count = 1;
            }
        }
    }
}

int main() {
    int boxSize = 0;
    char candy[51][51];
    cin >> boxSize;

    for (int i = 0; i < boxSize; i++) {
        for (int j = 0; j < boxSize; j++) {
            cin >> candy[i][j];
        }
    }

    for (int i = 0; i < boxSize; i++) {
        for (int j = 0; j < boxSize - 1; j++) {
            swap(candy[i][j], candy[i][j + 1]);

            countColumnCandy(candy, boxSize);
            countRowCandy(candy, boxSize);

            swap(candy[i][j], candy[i][j + 1]);

            swap(candy[j][i], candy[j + 1][i]);

            countColumnCandy(candy, boxSize);
            countRowCandy(candy, boxSize);

            swap(candy[j][i], candy[j + 1][i]);

        }
    }
    cout << maxCount;
    return 0;
}
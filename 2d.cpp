#include <iostream>
using namespace std;
#define N 5
int peak(int a[][N], int y1, int y2, int x1, int x2, int n) {
    if (y2 < y1 || x2 < x1) {
        return -1;
    }
    // Find middle row and column
    int m1 = (y1 + y2) / 2;
    int m2 = (x1 + x2) / 2;
    // Check right neighbor
    if (m2 < n - 1 && a[m1][m2] < a[m1][m2 + 1]) {
        return peak(a, y1, y2, m2 + 1, x2, n);
    }
    // Check left neighbor
    else if (m2 > 0 && a[m1][m2] < a[m1][m2 - 1]) {
        return peak(a, y1, y2, x1, m2 - 1, n);
    }
    // Check bottom neighbor
    else if (m1 < n - 1 && a[m1][m2] < a[m1 + 1][m2]) {
        return peak(a, m1 + 1, y2, x1, x2, n);
    }
    // Check top neighbor
    else if (m1 > 0 && a[m1][m2] < a[m1 - 1][m2]) {
        return peak(a, y1, m1 - 1, x1, x2, n);
    }
    // current element is a peak
    else {
        return a[m1][m2];
    }
}

int main() {
    int a[N][N] = {
        {24, 54, 52, 102, 1},
        {63, 652, 432, 43, 143},
        {43, 65, 24, 14, 6543},
        {65, 35, 765, 252, 765},
        {645, 23, 543, 24, 43},
    };
    cout << "Input Matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    int peakElement = peak(a, 0, N - 1, 0, N - 1, N);
    cout << "\nPeak Element Found: " << peakElement << endl;
    return 0;
}

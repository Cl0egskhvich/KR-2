#include <iostream>
using namespace std;

int main() {
    int n, m, w;
    cin >> n >> m >> w;

    char a[32][32] = {};

    for (int i = 0; i < w; i++) {
        int x, y;
        cin >> x >> y;
        a[x - 1][y - 1] = '*';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') continue;

            a[i][j] = '0';
            for (int x = -1; x <= 1; x++)
                for (int y = -1; y <= 1; y++)
                    if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < m && a[i + x][j + y] == '*')
                        a[i][j]++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
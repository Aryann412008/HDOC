//1
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    if (!(cin >> r >> c)) return 0;

    vector<vector<int>> matrix(r, vector<int>(c));

    // Read matrix elements
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Print matrix elements
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j > 0) cout << " ";
            cout << matrix[i][j];
        }
        cout << "\n";
    }

    return 0;
}

//2
#include <stdio.h>

int main()
{
    int r, c, i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}

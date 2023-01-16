#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int numberOfRows;
    int numberOfColumns;

    cin >> numberOfRows;

    cin >> numberOfColumns;

    int arr[numberOfRows][numberOfColumns];

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; i++)
        {

            arr[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; i++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        sort(arr[i], arr[i] + numberOfColumns);
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; i++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

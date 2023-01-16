#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int numberOfRows;
    int numberOfColumns;

    cin >> numberOfColumns;

    int arr[numberOfRows][numberOfColumns];

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; j++)
        {

            arr[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

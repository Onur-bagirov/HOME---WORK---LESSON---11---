#include <iostream>

using namespace std;

int main()
{
    cout << "======================================================";//[1]
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    unsigned int row_1 = 10;
    unsigned int col_1 = 10;

    cout << "    ";
    for (int j = 1; j <= col_1; j++) {
        cout << j << " ";
    }
    cout << endl;

    for (int i = 1; i <= row_1; i++) {
        cout << i << " ";
        for (int j = 1; j <= col_1; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "======================================================";//[2]
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    unsigned int row_3;
    unsigned int col_3;

    cout << "\tEnter row :";
    cin >> row_3;

    for (unsigned int y = 0; y < row_3; y++) {
        for (unsigned int x = 0; x < (row_3 - y - 1); x++) {
            cout << " ";
        }
        cout << "/";

        if (y > 0) {
            for (unsigned int x = 0; x < (2 * y - 1); x++) {
                cout << " ";
            }
            cout << " \\";
        }
        else {
            cout << "\\";
        }
        cout << endl;
    }

    for (unsigned int x = 0; x < (2 * row_3 - 1); x++) {
        cout << "_";
    }
    cout << endl;
    cout << "\n\n\n";
    cout << "======================================================";//[3]
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    unsigned int row_4;
    unsigned int col_4;

    cout << "\tEnter row :";
    cin >> row_4;
    cout << "\tEnter column :";
    cin >> col_4;

    for (int q = 0; q < row_4; q++)
    {
        for (int w = 0; w < col_4; w++)
        {
            if (w < row_4 - q)
            {
                cout << ' ';
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "======================================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";

    unsigned int row_5;
    unsigned int col_5;

    cout << "\tEnter row :";
    cin >> row_5;
    cout << "\tEnter col :";
    cin >> col_5;

    for (int i = 1; i <= row_5; ++i) {
        for (int j = 1; j <= (row_5 - i); ++j) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = row_5 - 1; i >= 1; --i) {
        for (int j = 1; j <= (row_5 - i); ++j) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "======================================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";

    unsigned int row_6;
    unsigned int col_6;

    cout << "\tEnter row :";
    cin >> row_6;
    cout << "\tEnter col :";
    cin >> col_6;

    for (int i = 1; i <= row_6; ++i)
    {
        for (int j = 1; j <= (row_6 - i); ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = row_6 - 1; i >= 1; --i)
    {
        for (int j = 1; j <= (row_6 - i); ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "======================================================";//[4]
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";

    unsigned int row_7;
    unsigned int col_7;

    cout << "\tEnter row :";
    cin >> row_7;
    cout << "\tEnter column :";
    cin >> col_7;

    for (int k = 1; k <= row_7; ++k)
    {
        for (int j = 1; j <= k; ++j)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (row_7 - k); ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= k; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = row_7; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (row_7 - i); ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "======================================================";//[5]
    cout << "\n\n";
    cout << "Tap - 8";
    cout << "\n\n\n\n";

    unsigned int col_8;
    unsigned int row_8;

    cout << "\tEnter column :";
    cin >> col_8;
    cout << "\tEnter row :";
    cin >> row_8;

    for (int i = 0; i < row_8; i++)
    {
        for (int v = 0; v < col_8; v++)
        {
            if ((i % 4 < 2 && v % 8 < 4) || (i % 4 >= 2 && v % 8 >= 4))
            {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    cout << "======================================================";
}

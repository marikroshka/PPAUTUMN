#include <iostream>
using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;
    char field[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            field[i][j] = '.';
        }
    }

    int mine;
    cin >> mine;
    for (int i = 0; i < mine; i++)
    {
        int x,y;
        cin >> x >> y;

        for (int row = x - 1; row < x+2; row++)
        {
            for (int col  = y-1; col < y+2; col++)
            {
                if (x >= 0 && x < n && y >= 0  && y < m) {
                    if (field[row][col] == '.') {
                        field[row][col] = '1';
                    } else {
                        field[row][col]++;
                    }
                } 
            }
        }
        

        field[x][y] = '*';
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << field[i][j] << " ";
        }

        cout << "\n";
        
    }
    

    return 0;
}

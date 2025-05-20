#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    // заполнение двумерного массива
    for (int i = 0; i <n; i++)          
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    // превращние двумерного массива в одинарный
    int pos = 0;
    int array[n*m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           array[pos] = arr[i][j];
           pos++;
            
        }
        
    }

    // заполнение отсортированного двумерного массива из значений одинарного массива
    int sortedarr[n][m];

    sort(array, array + n * m);

    int left = 0;
    int right = n*m - 1;
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(current %2 == 0){
                sortedarr[i][j] = array[right];
                right--;
            }
            else{
                sortedarr[i][j] = array[left];
                left++;
            }
            current++;
        }
        
    }

    //вывод в консоль
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout<<sortedarr[row][col]<< " ";
        }
        cout<<endl;
        
    }
    
    

    return 0;
}

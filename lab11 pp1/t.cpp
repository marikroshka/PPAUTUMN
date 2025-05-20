#include <iostream> 
#include <queue>
using namespace std;
 
int main(void) {
    int n, x, y;
    scanf("%i %i %i", &n, &y, &x);
    x--; y--;
    
    char soul[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf(" %c", &soul[i][j]);
    
    queue<pair<int, int>>q;
    q.push({x, y});
    
    int res = 0;  
    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        if(soul[x][y] == '.') 
            res++;
        soul[x][y] = '*';
            
        for(int i : {-1,1}) {
            if(x + i >= 0 && x + i < n && soul[x+i][y] == '.')
                q.push({x + i, y});
            if(y + i >= 0 && y + i < n && soul[x][y + i] == '.')
                q.push({x, y + i});    
        }        
    }
    printf("%i", res); 
}
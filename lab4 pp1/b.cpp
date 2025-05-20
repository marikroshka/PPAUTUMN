// Problem B: 193586. Art.
// One day Daniil decided to paint art. He had a canvas with a width 
//  and height 
// . Since Daniil is not a humanist, he started with an easy one - to draw rectangle. He measured them by 4 coordinates x1, y1, x2, y2. (x1, y1) - coordinates of the upper left corner. Coordinates (x2, y2) - coordinates of the lower right corner. Find unpainted area of the canvas

// Input format
// First line integers 
//  - width and height of the canvas (
// )

// Next line integer 
//  (
// )

// Next 
//  lines integers x1, y1, x2, y2 - coordinates of rectangle(
// )

// Output format
// Integer - unpainded area of the canvas

// Examples
// Input
// 10 10
// 3
// 1 1 3 3
// 4 4 5 5
// 0 0 2 2
// Output
// 92

#include <iostream> 
using namespace std; 
 
int main() { 
    int w, h, n; 
    cin >> w >> h >> n; 
    bool canvas[w][h]; 
    for (int i = 0; i < w; i++) { 
        for (int j = 0; j < h; j++) { 
            canvas[i][j] = false; 
        } 
    } 
 
    for (int i = 0; i < n; i++) { 
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2; 
 
        for (int x = x1; x < x2; x++) { 
            for (int y = y1; y < y2; y++) { 
                canvas[x][y] = true; 
            } 
        } 
    } 
 
    int unpainted_area = 0; 
    for (int i = 0; i < w; i++) { 
        for (int j = 0; j < h; j++) { 
            if (!canvas[i][j]) { 
                unpainted_area++; 
            } 
        } 
    } 
 
    cout << unpainted_area << endl; 
 
    return 0; 
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}

    int distance(int px, int py){
        return (x - px) * (x - px) + (y - py) * (y - py);
    }
};


struct ComparePoints {
    int px, py;
    ComparePoints(int px, int py) : px(px), py(py) {}

    bool operator()(Point& a, Point& b) {
        return a.distance(px, py) < b.distance(px, py);
    }
};

int main() {
    int px, py;
    cin >> px >> py;

    int n;
    cin >> n;

    vector<Point> points;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        points.push_back(Point(x, y));
    }

    
    sort(points.begin(), points.end(), ComparePoints(px, py));

    for (auto point : points) {
        cout << point.x << " " << point.y << endl;
    }

    return 0;
}

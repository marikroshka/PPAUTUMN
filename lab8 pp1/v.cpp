#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        deque<int> deck;
        for (int card = n; card >= 1; --card) {
            // Place the card at the front of the deque
            deck.push_front(card);

            // Simulate rotation by moving elements to the back as required
            for (int i = 0; i < card; ++i) {
                int temp = deck.back();
                deck.pop_back();
                deck.push_front(temp);
            }
        }

        // Output the result
        for (int i = 0; i < n; ++i) {
            cout << deck[i] << (i == n - 1 ? "\n" : " ");
        }
    }

    return 0;
}
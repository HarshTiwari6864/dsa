#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maxStepsClimbed(vector<int>& H, int x, int k) {
    priority_queue<int> maxUsed; // max-heap of energies used
    int steps = 0;

    for (int i = 0; i < H.size(); i++) {
        x -= H[i];
        maxUsed.push(H[i]);

        // If energy is insufficient, try to "undo" most expensive step using a potion
        if (x < 0) {
            if (k > 0 && !maxUsed.empty()) {
                x += 10;  // Use a potion
                k--;
            } else {
                break; // can't continue
            }
        }

        steps++;
    }

    return steps;
}

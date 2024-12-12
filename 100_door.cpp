#include <iostream>
using namespace std;

int main() {
    // Array representing the state of 100 doors: false means closed, true means open.
    bool doors[100] = {false};

    // Iterate over each person (from 1 to 100).
    for (int person = 1; person <= 100; ++person) {
        // Each person toggles doors based on their number (every nth door).
        for (int door = person - 1; door < 100; door += person) {
            doors[door] = !doors[door]; // Toggle the door's state.
        }
    }

    // Display the doors that are open after all 100 people have toggled.
    for (int i = 0; i < 100; ++i) {
        if (doors[i]) {
            cout << "Opened door: " << i + 1 << endl;
        }
    }

    return 0;
}

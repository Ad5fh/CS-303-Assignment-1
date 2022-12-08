#include <iostream> 
#include <queue> 
#include "queue.h"
using namespace std;


int main() {
    queue<int> integers;
    int size = 10;
    for (int i = 0; i < size; i++) {
        integers.push(i);
    }
    cout << "The element in the front is: " << endl;
    cout << integers.front() << endl;
    cout << "The list of numbers after the element in the front is removed and added to the rear" << endl;
    move_to_rear(integers);
    while (!integers.empty()) {
        cout << " " << integers.front() << endl;
        integers.pop();
    }
    return 0;
}


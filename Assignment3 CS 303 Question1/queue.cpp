#include <iostream> 
#include <queue> 
#include "queue.h"
using namespace std;


void move_to_rear(queue<int>& myQ) {
	int num = myQ.front();
	myQ.pop();
	myQ.push(num);
}

#include "Heap.h"
#include <cstdlib>
#include <ctime>


/*
Programer Kyan Kotschevar-Smead
Cpts 223
Spring 2023
MA 5

*/

int findkth(Heap<int> copy, int n) {
    for (int i = 1; i <= n; i++) {
        copy.pop();
    }
    return copy.top();
}

int main() {
	Heap<int>heap;
    srand(time(nullptr));
    //task 1
    for (int i = 0; i < 1000; ++i)
    {
        int r = rand() % 1000000 + 1;
        heap.push(r);
    }
    //task 2
    heap.print_array();
   //task 3 without deleteing any elements in orginal heap
    int k = 5; // could be any number
    int kth  = findkth(heap, k );
    cout << "The " << k << "th smallest number is " << kth << endl;

}


#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;                        // Loop index
    int temp=0;                   //Temporary holder for values

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 0; i <=NUM_ELEMENTS/2; ++ i) {
        temp=revVctr[i];
        revVctr[i]=revVctr[NUM_ELEMENTS-(i+1)];
        revVctr[NUM_ELEMENTS-(i+1)]=temp;// Swap
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}
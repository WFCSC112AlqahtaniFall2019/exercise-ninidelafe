#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    vector<int>revVctr(8);    // creating vector
    int i;                        // Loop index
    int temp=0;                   //Temporary holder for values

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr.at(i);
    }

    // Reverse
    for (i = 0; i <=NUM_ELEMENTS/2; ++ i) {
        temp=revVctr.at(i);
        revVctr.at(i)=revVctr.at(NUM_ELEMENTS-(i+1));
        revVctr.at(NUM_ELEMENTS-(i+1))=temp;// Swap
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr.at(i);
    }
    cout << endl;

    return 0;
}
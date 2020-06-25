#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myvec {1, 2, 3, 4};
    if (auto it = find(myvec.begin(), myvec.end(), 2); it != myvec.end())
        *it = 123123;
    
    for (auto element : myvec) {
        cout << element << endl; // read only
    }

    for (auto &element : myvec) {
        element *= 2; // writable
    }

    for (auto element : myvec) {
        cout << element << endl; // read only
    }    
}
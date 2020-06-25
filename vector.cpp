#include <initializer_list>
#include <vector>
#include <iostream>

using namespace std;

template<typename T>
class MyVector {
    public:
        vector<T> vec;
        MyVector(initializer_list<T> list) {
            for (auto it = list.begin(); it != list.end(); ++it) {
                vec.push_back(*it);
            }
        }
};

int main() {
    MyVector<string> myvec { "anca", "wowowo", "wkwk", "mantul", "gokil" };

    for (auto it = myvec.vec.begin(); it != myvec.vec.end(); ++it) {
        cout << *it << endl;
    }
}
#include <iostream>

using namespace std;

template<typename T, typename U>
auto add(T a, U b) {
    return a + b;
}

int main() {
    auto c = add<int, double>(123, 12.56);
    cout << c << endl;
}
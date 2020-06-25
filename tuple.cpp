#include <iostream>
#include <tuple>

using namespace std;

tuple<int, string, bool> myy_tuple() {
    return make_tuple(25, "anca", true);
}

int main() {
    auto [age, name, single] = myy_tuple();
    cout << "age = " << age << endl
    << "name = " << name << endl
    << "single = " << single << endl;
}
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    auto i = 5;
    auto b = "boy";
    auto v_6 = {1, 2, 3};
    for(auto i : v_6)
        cout << i << " ";
    cout << "\n";
    cout << "Variables declared and initialized without explicitly stating type!" << "\n";
    cout << b << "\n";
}
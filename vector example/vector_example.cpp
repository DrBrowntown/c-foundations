#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Three ways of declaring and initializing vectors.
    vector<int> v_1{0, 1, 2};
    vector<int> v_2 = {3, 4, 5};
    vector<int> v_3;
    v_3 = {6};
    // Creating a 2D vector.
    vector<vector<int>> v {{1,2}, {3,4}};

    // For loop to iterate through vector
    for(int i : v_2)
        cout << i << " ";
    cout << "\n";
    cout << "Great! A 2D vector has been created." << "\n";
    cout << "Everything worked!" << "\n";
}
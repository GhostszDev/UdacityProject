#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

int main() {
    vector<vector<int>> board = {
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0}
    };

    cout << "This vector of a vector of ints has been init!" << endl;
    return 0;
}

#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

void PrintBoard(vector<vector<int>> vec){
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout << vec[i][j];
        }
        cout << "\n";
    }
}

int main() {
    vector<vector<int>> board = {
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0}
    };

    PrintBoard(board);
    return 0;
}

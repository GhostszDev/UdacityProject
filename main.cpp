#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::cout;
using std::vector;
using std::endl;
using std::ifstream;
using std::string;

void ReadBoardFile(string pathToFile){
    ifstream boardFile;
    boardFile.open(pathToFile);

    if(boardFile.is_open()){
        string line;
        while(getline(boardFile, line)){
            cout << line << "\n";
        }
    } else {
        cout << "failed to get file from path \n";
    }
}

void PrintBoard(vector<vector<int>> vec){
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout << vec[i][j];
        }
        cout << "\n";
    }
}

int main() {
    ReadBoardFile("1.board");
    return 0;
}

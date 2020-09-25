#include <iostream>
#include <string>
#include <vector>

using namespace std;

string * CreateBoard(){
    string board [] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    return board;
}


void DisplayBoard(string * b){
    int count = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0; j < 3; j++){
            if(count == 3){
                cout << b[i][j] << endl;
                count = 0;
            }
            else{
                cout << b[i][j];
                count = count + 1;
            }
        }
    }


int main(){
    return 0;
}
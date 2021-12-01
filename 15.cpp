using namespace std;
#include <math.h>
#include <iostream>

int main(){
    int size = 20;
    long grid[size + 1][size + 1];
    for(int i = 1; i < size + 1; i++){
        grid[0][i] = 1;
        grid[i][0] = 1;
    }
    for(int i = 1; i < size + 1; i++){
        for(int j = 1; j < size + 1; j++){
            grid[j][i] = grid[j][i-1] + grid[j-1][i];
        }
    }
    cout << grid[size][size] << endl;
}
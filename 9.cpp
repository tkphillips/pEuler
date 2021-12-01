using namespace std;
#include <math.h>
#include <iostream>

int main(){
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            for(int k = 0; k < 1000; k++){
                if(i + j + k == 1000 && pow(k,2) + pow(j,2) == pow(i,2)){
                    cout << i*j*k << endl;
                }
            }
        }
    }
    return 0;
}
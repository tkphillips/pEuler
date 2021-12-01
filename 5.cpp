using namespace std;
#include <math.h>
#include <iostream>

int main(){
    int num = 1;
    bool test = false;
    while(!test){
        for(int i = 1; i < 21; i++){
            if(num % i != 0){
                num++;
                break;
            }
            if(i == 20){
                test = true;
            }
        }
    }
    cout << num << endl;
    return 0;
}
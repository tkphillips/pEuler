using namespace std;
#include <math.h>
#include <iostream>

int sumPropDiv(int x){
    int sum = 0;
    for(int i = 1; i < x; i++){
        if(x%i == 0){
            sum = sum + i;
        }
    }
    return sum;
}

int main(){
    int bigSum = 0;
    for(int i = 1; i < 10000; i++){
        if(i == sumPropDiv(sumPropDiv(i)) && (i != sumPropDiv(i))){
            bigSum = bigSum + i;
        }
    }
    cout << bigSum << endl;
    return 0;
}
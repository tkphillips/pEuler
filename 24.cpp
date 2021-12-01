using namespace std;
#include <math.h>
#include <iostream>
#include <vector>

int factorial(int n){
    if(n == 1){
        return n;
    }
    return n *= factorial(n - 1);
}

int main(){
    const int mil = 1000000;
    int digits[10] = {0,1,2,3,4,5,6,7,8,9};
    
}
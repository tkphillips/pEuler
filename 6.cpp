using namespace std;
#include <math.h>
#include <iostream>

int main(){
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 1; i < 101; i++){
        sum1 += pow(i,2);
    }
    for(int i = 1; i < 101; i++){
        sum2 += i;
    }
    sum2 = pow(sum2,2);
    cout << sum2-sum1 << endl;
    return 0;
}
using namespace std;
#include <math.h>
#include <iostream>

int main(){
    int largest = 0;
    int temp = 0;
    int reverse = 0;
    int digit = 0;
    int orig = 0;
    for(int i = 999; i > 99; i--){
        for(int k = 999; k > 99; k--){
            orig = k*i;
            temp = orig;
            while(temp > 0){
                reverse = (reverse * 10) + temp %10;
                temp = temp / 10;
            }
            //cout << orig << ":" << reverse << endl;
            if(orig == reverse && orig > largest){
                largest = orig;
                cout << largest << endl;
            }
            reverse = 0;
        }
    }
    cout << largest << endl;
    return 0;
}
using namespace std;
#include <math.h>
#include <iostream>

bool isPrime(long n){
    // Corner case
    if(n == 1){
        return false;
    }else if(n < 4){
        return true;
    }else if(n%2 == 0){
        return false;
    }else if(n < 9){
        return true;
    }else if(n%3 == 0){
        return false;
    }else{
        long r = floorl(sqrt(n));
        long f = 5;
        while(f <= r){
            if(n%f == 0){
                return false;
            }
            if(n%(f+2) == 0){
                return false;
            }
            f += 6;
        }
    return true;
  }    
}

int main(){
    long num = 6857;
    long largestFactor = 0;
    while(num != 1 && !isPrime(num)){
        for(long i = 1; i < num; i++){
            //cout << i << endl;
            if((isPrime(i)) && (num%i == 0)){
                if(i > largestFactor){
                    largestFactor = i;
                    cout << "Largest Factor: " << largestFactor << endl;
                }
                num = num/i;
                cout << "Num: " << num << endl;
                i = 1;
            }
        }
    }
    if(isPrime(num) && num > largestFactor){
        cout << num << endl;
    }else{
        cout << largestFactor << endl;
    }
    return 0;
}
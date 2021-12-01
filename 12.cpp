#include <bits/stdc++.h>
using namespace std;

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

// Driver Code
int main(){
    int divisors = 2;
    long Tnum = 3;
    long out = 3;
    long countNum = 3;
    int mostDiv = 0;
    while(divisors <= 500){
        divisors = 2;
        Tnum += countNum;
        countNum++;
        //for each Tnum
        for(long i = 2; i < sqrt(Tnum); i++){
            if(Tnum%i == 0){
                divisors+=2;
            }
        }
        if(divisors > mostDiv){
            mostDiv = divisors;
            out = Tnum;
        }
    }
    cout << out << endl;
    cout << mostDiv << endl;
    return 0;
}
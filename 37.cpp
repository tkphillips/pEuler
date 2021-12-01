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

bool checkTrun(int num){
    if(num > 10){
        return isPrime(num);
    }
    
}

int main(){
    vector<int> numTrunPrimes;
    int num = 8;
    while(numTrunPrimes.size() < 11){
        if(isPrime(num)){
            if(checkTrun(num)){
                numTrunPrimes.push_back(num);
            }
            
        }
    }
    return 0;
}
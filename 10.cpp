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
    long sum = 0;
    long num = 0;
    bool prime;
    while(num < 2000000){
        num++;
        prime = isPrime(num);
        if(prime){
            sum += num;
            cout << sum << endl;
        }
    }
    cout << sum << endl;
    return 0;
}
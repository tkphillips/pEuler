#include <bits/stdc++.h>
using namespace std;
 

bool isPrime(int n){
    // Corner case
    if(n <= 1){
        return false;
    }  
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
 
// Driver Code
int main(){
    int totalPrimes = 0;
    int num = 0;
    bool prime;
    while(totalPrimes < 10001){
        num++;
        prime = isPrime(num);
        if(prime){
            totalPrimes++;
        }
    }
    cout << totalPrimes << endl;
    cout << num << endl;
    return 0;
}
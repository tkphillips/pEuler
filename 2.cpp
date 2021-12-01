using namespace std;
#include <math.h>
#include <iostream>
#include <vector>

int main(){
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);
    int i = 1;
    while(fib[i] < 4000000){
        fib.push_back(fib[i] + fib[i-1]);
        i++;
    }
    int sum = 0;
    for(int i = 0; i < fib.size(); i++){
        if(fib[i] % 2 == 0){
            sum += fib[i];
        }
    }
    cout << sum << endl;
}
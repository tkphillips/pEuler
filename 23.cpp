using namespace std;
#include <math.h>
#include <iostream>
#include <vector>

int main(){
    //find all abundant numbers
    vector<int> abundant;
    abundant.push_back(12);
    for(int i = 13; i <= 28123; i++){
        vector<int> factors;
        factors.clear();
        //find all factors
        for(int j = 1; j < i; j++){
            if( i % j == 0){
                factors.push_back(j);
            }
        }
        //sum factors
        int sum = 0;
        for(int j = 0; j < factors.size(); j++){
            sum += factors.at(j);
        }
        if(sum > i){
            abundant.push_back(i);
        }
    }
    //sum all abundant number with every other abundant number add it to a list
    bool aSum[28123] = {false};
    for(int i = 0; i < abundant.size(); i++){
        for(int j = i; j < abundant.size(); j++){
            int summ = abundant.at(j) + abundant.at(i);
            if(summ <= 28123){
                aSum[summ - 1] = true;
            }
        }
    }
    int bigSum = 0;
    for(int i = 0; i < 28123; i++){
        if(!aSum[i]){
            bigSum += i;
            bigSum++;
        }
    }
    cout << bigSum << endl;
    return 0;
}
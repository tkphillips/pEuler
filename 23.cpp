using namespace std;
#include <math.h>
#include <iostream>
#include <vector>

bool sumPropDiv(int x){
    int sum = 1;
    for (int i=2; i<=sqrt(x); i++){
        if (x%i == 0){
            if (x/i == i){
                sum += i;
            }else{
                sum += i;
                sum += x/i;
            }
        }
    }
    if(sum == x){
        return true;
    }
    return false;
}

int main(){
    vector<int> abunNum;
    //find all abundant numbers under 28124
    for(int i = 24; i < 28124; i++){
        if(sumPropDiv){
            abunNum.push_back(i);
        }
    }
    cout << "1" << endl;
    //make list of all good numbers
    vector<int> valid;
    bool exit = false;
    for(int i = 24; i < 28124; i++){
        for(int k = 0; k < abunNum.size(); k++){
            for(int j = 0; j < abunNum.size(); j++){
                if(i == abunNum.at(k) + abunNum.at(j)){
                    valid.push_back(i);
                    exit = true;
                    break;
                }
            }
            if(exit){
                break;
            }    
        }
        exit = false;
    }
    cout << "2" << endl;
    int sum = 0;
    //sum all bad numbers
    for(int i = 0; i < 28124; i++){
        bool good = true;
        for(int j = 0; j < valid.size(); j++){
            if(valid.at(j) == i){
                good = false;
            }
        }
        if(good){
            sum += i;
        }
        cout << ((float)i/28124) * 100 << "%" << endl;
    }
    cout << sum << endl;
}
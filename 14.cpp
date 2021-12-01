using namespace std;
#include <math.h>
#include <iostream>
#include <vector>

int main(){
    long largestNum = 0;
    long longestLength = 0;
    vector<long> Lengths;
    Lengths.push_back(1);
    for(long i = 2; i < 1000000; i++){
        long num = i;
        long length = 1;
        while(num != 1){
            if(num < i){
                length += Lengths.at(num-1);
                num = 1;
            }else if(num % 2 == 0){
                length++;
                num = num/2;
            }else{
                length++;
                num = (3*num)+1;
            }
        }
        Lengths.push_back(length);
        if(length > longestLength){
            longestLength = length;
            largestNum = i;
        }
    }
    cout << largestNum << endl;
    return 0;
}
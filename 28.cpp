
using namespace std;
#include <iostream>

int main(){
    int add = 2;
    int sum = 1;
    int curr = 1;
    while(add <= 1000){
        for(int i = 0; i < 4; i++){
            curr += add;
            sum += curr;
        }
        add += 2;
    }
    cout << sum << endl;
    return 0;
}
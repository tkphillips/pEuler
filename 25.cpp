#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
#include <math.h>
#include <string>
#include <iostream>

int main(){
    cpp_int curr = 1;
    cpp_int prev = 1;
    cpp_int temp;
    int i = 2;
    cpp_int check = 0;
    while(check < 1000){
        temp = curr;
        curr = curr + prev;
        prev = temp;
        i++;
        check = curr.str().size();
    }
    cout << i << endl;
    return 0;
}
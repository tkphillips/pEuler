// CPP program to find factorial of large 
// number using boost library.
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
  
cpp_int Factorial(int number)
{
    cpp_int num = 1;
    for (int i = 1; i <= number; i++)
        num = num * i;
    return num;
}
  
int main()
{
    int number = 100;
    cpp_int fact = Factorial(number);
    cpp_int sum = 0;
    while(fact > 10){
        sum += fact%10;
        fact /= 10;
    }
    sum += fact;
    cout << sum << endl;
}
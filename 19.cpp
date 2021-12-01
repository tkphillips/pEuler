using namespace std;
#include <math.h>
#include <iostream>

int main(){
    int weekDay = 0;
    int sunSum = 0;
    weekDay = 365 % 7;
    //find weekday start on jan 1 1901
    for(int i = 1901; i < 2001; i++){
        //solve for next jan 1st
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 31 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //solve for next feb 1st
        if(weekDay == 6){
            sunSum++;
        }
        if(i % 100 == 0 && i % 400 == 0){
            weekDay += 29 % 7;
        }else if(i % 100 == 0){
            weekDay += 28 % 7;
        }else if(i % 4 == 0){
            weekDay += 29 % 7;
        }else{
            weekDay += 28 % 7;
        }
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //solve for mar
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 31 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //april
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 30 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //may
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 31 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //june
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 30 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //july
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 31 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //august
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 31 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //sep
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 30 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //oct
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 31 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //nov
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 30 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
        //dec
        if(weekDay == 6){
            sunSum++;
        }
        weekDay += 31 % 7;
        if(weekDay >= 7){
            weekDay -= 7;
        }
    }
    cout << sunSum << endl;
}
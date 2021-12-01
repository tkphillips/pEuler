using namespace std;
#include <math.h>
#include <iostream>

int numLengthSwitch(int num){
    switch(num) {
        case 1:
            //one
            return 3;
        case 2:
            //two
            return 3;
        case 3:
            //three
            return 5; 
        case 4:
            //four
            return 4;
        case 5:
            //five
            return 4;
        case 6:
            //six
            return 3;
        case 7:
            //seven
            return 5;
        case 8:
            //eight
            return 5;
        case 9:
            //nine
            return 4;
        case 10:
            //ten
            return 3;
        case 11:
            //eleven
            return 6;
        case 12:
            //twelve
            return 6;
        case 13:
            //thirteen
            return 8;
        case 14:
            //fourteen
            return 8;
        case 15:
            //fifteen
            return 7;
        case 16:
            //sixteen
            return 7;
        case 17:
            //seventeen
            return 9;
        case 18:
            //eighteen
            return 8;
        case 19:
            //nineteen
            return 8;
        case 20:
            //twenty
            return 6;
        case 30:
            //thirty
            return 6;
        case 40:
            //fourty
            return 6;
        case 50:
            //fifty
            return 5;
        case 60:
            //sixty
            return 5;
        case 70:
            //seventy
            return 7;
        case 80:
            //eighty
            return 6;
        case 90:
            //ninty
            return 5;
        case 100:
            //onehundredand 
            return 13;
        case 200:
            //twohundredand 
            return 13;
        case 300:
            //threehundredand 
            return 15;
        case 400:
            //fourhundredand 
            return 14;
        case 500:
            //fivehundredand 
            return 14;
        case 600:
            //sixhundredand 
            return 13;
        case 700:
            //sevenhundredand 
            return 15;
        case 800:
            //eighthundredand 
            return 15;
        case 900:
            //ninehundredand 
            return 14;
        default:
            cout << "error" << endl;
            return 0;
    }
}

int numLength(int x){
    int sum = 0;
    if(x <= 20){
        cout << x << endl;
        return numLengthSwitch(x);
    }
    if(x < 100){
        sum += numLengthSwitch((x/10)*10);
        x = x%10;
        return sum += numLengthSwitch(x);
    }
    if(x < 1000){
        sum += numLengthSwitch((x/100)*100);
        cout << 100*(x/100) << endl;
        x = x%100;
        if(x == 0){
            cout << "sub" << endl;
            sum -= 3;
        }
        if(x <= 20){
            return sum += numLengthSwitch(x);
        }
        sum += numLengthSwitch((x/10)*10);
        x = x%10;
        return sum += numLengthSwitch(x);
    }
    

}

int main(){
    int sum = 0;
    //adding all the numbers 1 -> 99
    for(int i = 1; i < 1000; i++){
        sum += numLength(i);
    }
    
    //adding "onethousand"
    sum += 11;
    cout << sum << endl;
}
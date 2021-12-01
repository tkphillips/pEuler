#include <iostream>     // cout, endl
#include <fstream>      // fstream
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>    // copy
#include <iterator>     // ostream_operator
#include <boost/tokenizer.hpp>

int main(){
    using namespace std;
    using namespace boost;
    string data("names.txt");
    ifstream in(data.c_str());
    if (!in.is_open()) return 1;
    typedef tokenizer< escaped_list_separator<char> > Tokenizer;
    vector<string> names;
    string line;
    while (getline(in,line)){
        Tokenizer tok(line);
        names.assign(tok.begin(),tok.end());
    }
    int score = 0;
    string temp;
    sort(names.begin(),names.end());
    int sum = 0;
    int bigSum = 0;
    for(int i = 0; i < names.size(); i++){
        sum = 0;
        temp = names.at(i);
        for(int j = 0; j < temp.length(); j++){
            sum += temp[j] - 64;
        }
        bigSum += sum * (i+1);
    }
    cout << bigSum << endl;
}

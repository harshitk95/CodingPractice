#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(){

    ifstream read("input.txt");
    vector<int> intdata;

    string data;
    if(read.is_open()){
        getline(read, data);
    }

    stringstream ss(data);

    while(ss.good()){
        string substring;
        getline(ss, substring, ',');
        intdata.push_back(stoi(substring));
    }

    // Need to change some data as the thing asks

    intdata[1] = 12;
    intdata[2] = 2;

    // Now i have the data in the vector intdata

    // Now i can make the function opcode
    int i = 0;
    while(i<=intdata.size()){

        if(intdata[i] == 99){
            break;
        }
        switch(intdata[i]){
            case 1:
                intdata[intdata[i+3]] = intdata[intdata[i+1]] + intdata[intdata[i+2]];
                i+=4;
                break;
            case 2:
                intdata[intdata[i+3]] = intdata[intdata[i+1]] * intdata[intdata[i+2]];
                i+=4;
                break;
        }
    }

    cout << intdata[0];

    return 0;
}

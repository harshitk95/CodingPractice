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

    return 0;
}

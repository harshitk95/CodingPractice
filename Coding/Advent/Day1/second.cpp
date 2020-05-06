#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


int main(){
    int total_fuel = 0;
    string line;
    int fuel = 0;

    vector<int> masses;
    ifstream read_masses("input.txt");

    if (read_masses.is_open()){
        while( getline(read_masses,line)){
            masses.push_back(stoi(line));
        }
        read_masses.close();
    }

    for(int i = 0; i < masses.size(); i++){
        fuel = int(masses[i]/3) - 2;
        int new_fuel = int(fuel/3) - 2;
        while(new_fuel >= 0){
            fuel += new_fuel;
            new_fuel = int(new_fuel/3) - 2;
        }
        total_fuel += fuel;

    }

    cout << total_fuel;

    return total_fuel;
}

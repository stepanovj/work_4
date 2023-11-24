#include <iostream>
#include <vector>
#include <map>
#include "tempgrouper.hpp"

using namespace std;

bool tests(){
vector<float> a{10.3, 10.7, -25.4, 15.5, 15.2, 36.1};
    map<int, std::vector<float>> m = groupTemperatures(a);
    for(const auto& [element, temps] : m){
        if(element == 10 && temps.size() != 4) return false;
        if(element == 30 && temps.size() != 1) return false;
        return true;
    }
}

int main()
{
    vector<float> a{10.3, 10.7, -25.4, 15.5, 15.2, 36.1};
    map<int, std::vector<float>> m = groupTemperatures(a);
    for(const auto& [element, temps] : m){
        cout << element << " : ";
        for(int i = 0; i < temps.size(); i++) cout << temps[i] << " ";
        cout << endl;
    }

    cout << "---------------------------" << endl;
    if(tests() == true) cout << "tests pass";
    else cout << "tests failed";
    return 0;
}

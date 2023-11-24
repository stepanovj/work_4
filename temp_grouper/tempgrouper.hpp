#include <map>
#include <vector>

std::map<int, std::vector<float>> groupTemperatures(std::vector<float> temps){
    std::map<int, std::vector<float>>  mp;
    for(int i = 0; i < temps.size(); i++){
        int vInt = int(temps[i]);
        int step = vInt - (vInt % 10);
        mp[step].push_back(temps[i]);
    }
    return mp;
}

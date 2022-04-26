#include "FilterGeneric.h"
std::vector<int> FilterGeneric::filter(std::vector<int> vec){
    if(vec.size()==1){
        if(g(vec.at(0))){
            resVec.push_back(vec.at(0));
            return resVec;
        }
        return resVec;
    }
    int currentValue = vec.at(0);
    vec.erase(vec.begin());
    if(g(currentValue)){
        resVec.push_back(currentValue);
    }
    filter(vec);
    return resVec;
}
// virtual bool g(int) = 0;
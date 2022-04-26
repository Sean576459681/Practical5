#include "MapGeneric.h"
#include <iostream>
//{1,2,3}
std::vector<int> MapGeneric::map(std::vector<int> vec){
    if(vec.size()==1){
        resVec.push_back(f(vec.at(0))); 
        return resVec;
    }

    int currentElement = vec.at(0);   //1 2
    vec.erase(vec.begin());             //{2,3} {3}
    resVec.push_back(f(currentElement));   //{3,6} 
    map(vec);   //
    return resVec;
}

// void MapGeneric::printA(){
//     std::cout<<"A"<<std::endl;
// }
//    virtual int f(int) = 0;
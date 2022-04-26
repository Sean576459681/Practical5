#include "FilterNonPositive.h"
bool FilterNonPositive::g(int num){
    bool pend = false;
    if(num>0){
        pend = true;
        return pend;
    }else if(num<=0){
        return false;
    }
    return pend;
}
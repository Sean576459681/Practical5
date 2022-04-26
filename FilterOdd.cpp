#include "FilterOdd.h"
bool FilterOdd::g(int num){
    bool pend = false;
    if(num%2==0){
        pend = false;
        return pend;
    }else if(num%2!=0){
        return true;
    }
    return pend;
}
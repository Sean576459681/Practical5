#include "FilterForTwoDigitPositive.h"
bool FilterForTwoDigitPositive::g(int num){
    if(num>=10&&num<=99){
        return true;
    }
    return false;
}
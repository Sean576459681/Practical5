#ifndef FILTERTDP_H
#define FILTERTDP_H
#include "FilterGeneric.h"
class FilterForTwoDigitPositive :public FilterGeneric{
    // private
    bool g(int num);
};
#endif
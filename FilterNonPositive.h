#ifndef FILTERNPOSI_H
#define FILTERNPOSI_H
#include "FilterGeneric.h"
class FilterNonPositive :public FilterGeneric{
    // private
    bool g(int num);
};
#endif
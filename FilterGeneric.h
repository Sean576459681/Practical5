#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>
class FilterGeneric{
    public:
    std::vector<int> filter(std::vector<int>);
    std::vector<int> resVec;
    private:
    virtual bool g(int) = 0;
};
#endif
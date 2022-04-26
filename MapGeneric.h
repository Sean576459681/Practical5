#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>
class MapGeneric{
    public:
    std::vector<int> map(std::vector<int>);
    std::vector<int> resVec;
    private:
    virtual int f(int) = 0;
    //void printA();
};
#endif

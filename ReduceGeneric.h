#ifndef REDUCEGENE_H
#define REDUCEGENE_H
#include <vector>
class ReduceGeneric{
    public:
        ReduceGeneric();
        int reduce(std::vector<int>);
        int res;
    private:
        virtual int binaryOperator(int, int) = 0;
};
#endif
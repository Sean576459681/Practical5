#include "ReduceGeneric.h"

//bool first_compare = true;

ReduceGeneric::ReduceGeneric(){
    res = 2147483647;
}

int ReduceGeneric::reduce(std::vector<int> vec){
    // if(vec.size()==1){
    //     //res = binaryOperator(res, vec.at(0));
    //     return res;
    // }

    // if(first_compare){
    //     first_compare=false;
    //     res = vec.at(0);
    // }
    // vec.erase(vec.begin());
    // res = binaryOperator(res, vec.at(0));
    // res = reduce(vec);
    // return res;

    if(vec.size()==1){
        //recursion finished
        res = binaryOperator(res, vec.at(0));
        return res;
    }
    // if(first_compare){
    //     first_compare=false;
    //     res = vec.at(0);
    //     vec.erase(vec.begin());
    //     res = binaryOperator(res, vec.at(0));
    // }else{
    //     vec.erase(vec.begin());
    //     res = binaryOperator(res, vec.at(0));
    // }
    //res = reduce(vec);

    int current = vec.at(0);
    vec.erase(vec.begin());
    res = binaryOperator(res, current);
    return reduce(vec);
}

// virtual int binaryOperator(int, int) = 0;
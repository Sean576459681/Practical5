#include "ReduceGCD.h"

ReduceGCD::ReduceGCD(){
    res = 0;
}


int ReduceGCD::binaryOperator(int num1, int num2){
    if(num1==0){
        return num2;
    }
    if(num2==0){
        return num1;
    }
    if(num1==num2){
        return num1;
    }

    if(num1>num2){
        return binaryOperator((num1-num2),num2);
    }
    return binaryOperator(num1,(num2-num1));
}
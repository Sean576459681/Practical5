#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
using namespace std;

void printVec(vector<int> vec){
    for(int i =0; i < vec.size(); i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    vector<int> myVec {6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    //vector<int> resVec;
    cout<<"Input:"<<endl;
    printVec(myVec);
    vector<int> resVec;

    //using map twice 
    MapTriple Mtri;
    resVec = Mtri.map(myVec);
    MapAbsoluteValue Mabs;
    resVec = Mabs.map(resVec);
    cout<<"Map Triple and Abs:"<<endl;
    printVec(resVec);


    //using filter twice 
    FilterForTwoDigitPositive F1;
    resVec = F1.filter(resVec);
    cout<<"FilterForTwoDigitPositive:"<<endl;
    printVec(resVec);


    FilterOdd F2;
    resVec = F2.filter(resVec);
    cout<<"Filter Odd:"<<endl;
    printVec(resVec);

    
    int min = 0;
    int GCD = 0;

    ReduceMinimum R1;
    min = R1.reduce(resVec);
    ReduceGCD R2;
    GCD = R2.reduce(resVec);

    cout<<"Min: "<<min<<"  "<<"GCD: "<<GCD<<endl;

}
    
// int main(){
//     vector<int> myVec;
//     myVec.push_back(4);
//     myVec.push_back(7);
//     myVec.push_back(-9);
//     myVec.push_back(1);
//     myVec.push_back(-2);
//     myVec.push_back(10);

//     cout<<"Vector:"<<endl;
//     for(int i =0; i < myVec.size(); i++){
//         cout<<myVec.at(i)<<" ";
//     }
//     cout<<endl;

//     vector<int> resVec;
//     MapTriple m1;
//     cout<<"Triple:"<<endl;
//     resVec=m1.map(myVec);
//     for(int i =0; i < resVec.size(); i++){
//         cout<<resVec.at(i)<<" ";
//     }
//     cout<<endl;

//     //
//     MapSquare m2;
//     cout<<"Square:"<<endl;
//     resVec=m2.map(myVec);
//     for(int i =0; i < resVec.size(); i++){
//         cout<<resVec.at(i)<<" ";
//     }
//     cout<<endl;

//     //
//     MapAbsoluteValue m3;
//     cout<<"Square:"<<endl;
//     resVec=m3.map(myVec);
//     for(int i =0; i < resVec.size(); i++){
//         cout<<resVec.at(i)<<" ";
//     }
//     cout<<endl;

//     //
//     FilterOdd m4;
//     cout<<"FilterOdd:"<<endl;
//     resVec=m4.filter(myVec);
//     for(int i =0; i < resVec.size(); i++){
//         cout<<resVec.at(i)<<" ";
//     }
//     cout<<endl;

//     //
//     FilterNonPositve m5;
//     cout<<"FilterNonPosi:"<<endl;
//     resVec=m5.filter(myVec);
//     for(int i =0; i < resVec.size(); i++){
//         cout<<resVec.at(i)<<" ";
//     }
//     cout<<endl;

//     //
//     FilterForTwoDigitPositve m6;
//     cout<<"FilterForTwoDigitPositve:"<<endl;
//     resVec=m6.filter(myVec);
//     for(int i =0; i < resVec.size(); i++){
//         cout<<resVec.at(i)<<" ";
//     }
//     cout<<endl;


//     //-------
//     vector<int> myVec2;
//     myVec2.push_back(18);
//     myVec2.push_back(6);
//     myVec2.push_back(30);

//     int res = 0;
//     //
//     ReduceMinimum r1;
//     res = r1.reduce(myVec2);
//     cout<<"ReduceMIN: "<<res<<endl;

//     ReduceGCD r2;
//     res = r2.reduce(myVec2);
//     cout<<"ReduceGCD: "<<res<<endl;

// }
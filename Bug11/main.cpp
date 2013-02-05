/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 3. helmikuuta 2013, 9:06
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */
typedef int INT;
typedef signed int SINT;
struct Hole {
    SINT Fairway:1, OutOfBounds:1, Water:1, Green:1;
};

#define NHoles 18
Hole Holes[NHoles];

int numberOfFairways(){
    int nof = 0;
    for(int i= 0; i <NHoles; ++i) {
        cout << "Fairway:";
        if(Holes[i].Fairway > 0)
            nof++;
    }
    return nof;
}

int main(int argc, char** argv) {
    cout << numberOfFairways();
    return 0;
}


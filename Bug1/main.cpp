/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 21:12
 */

#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */

typedef double Temp;
#define Smoke 1.002
#define Mirror 1.001

Temp annual_delta(Temp t, double grants, double press_covrg){
    return t * Smoke * grants * Mirror * press_covrg;
}
int main(int argc, char** argv) {
    Temp t = 72.3;
    int years = 10;
    
    do {
        printf("%f\n", t);
        t = annual_delta(t, 1.002, 1.002);
    }while(years --);
    return 0;
}


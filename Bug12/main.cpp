/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 3. helmikuuta 2013, 9:26
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */

struct Item { 
    const char *name; 
    int preptime; 
};

#define MpH 6
struct Item Menu[] = {
    { "turkey", 3.5 * MpH },
    { "potatoes", 1.5 * MpH },
    { "peas", 25 },
    { 0, 0 }
};

int main(int argc, char** argv) {
    #define MpH 60  
    int start_time = 15 * MpH;
    for( int i = 0; Menu[i].name; i++ ) {
        int t = start_time - Menu[i].preptime;
        cout << "Mph value: " << MpH;
        printf( "start %s at time %d:%02d\n",  Menu[i].name, t/MpH, t%MpH );
    }
    return 0;
}


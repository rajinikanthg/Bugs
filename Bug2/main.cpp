/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 21:28
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */

void print(const char *name){
    
    int length = strlen(name);
    int indent = 100 / (length - 8) / 2;
    for (int i = 0; i < indent; ++i)
        printf(" ");
    printf("%s\n", name);
}

int main(int argc, char** argv) {
    print( "Mitt Romney" );
    print( "Newt Gingrich" );
    print( "Rick Santorum" );
    print( "Ron Paul" );
    return 0;
}


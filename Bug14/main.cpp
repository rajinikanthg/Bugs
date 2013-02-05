/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 3. helmikuuta 2013, 11:59
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

/*
 * 
 */

const char *flowers[] = {
    "rose", "tulip", "daisy",
    "petunia", "orchid", "lily"
          
};
int main(int argc, char** argv) {
    int i;
    int choice;
    for (i = 0; i <25;++i){
        choice = rand() % 6;
        printf( "%s\n", flowers[choice] );
    }
    return 0;
}


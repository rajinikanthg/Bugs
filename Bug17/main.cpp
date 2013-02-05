/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 5. helmikuuta 2013, 18:00
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define N 5
 char * names[N] = {
  "Red Sox", "Yankees", "Giants",
  "Rangers", "Phillies"
};


char* find_name() {
    char *x;
    int id = rand() % N;
    x = (char*)malloc(100);
    if(!x)
        exit(1);    
    strcpy(x, names[id]);
    return x;
}

int main(int argc, char** argv) {
    char *ptr = find_name();
    cout <<"copied string value: " << ptr <<endl;
    delete ptr;
    
    return 0;
}


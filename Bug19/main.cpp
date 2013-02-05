/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 5. helmikuuta 2013, 19:12
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char stars[9][11];
void fill_stars() {
    for(int i = 0; i <9; ++i)
        for (int j = 0; j <11; ++j)
            stars[i][j] = (i+j) % 2 ? ' ' : '*';
}
int main(int argc, char** argv) {
    fill_stars();
    for(int i = 0; i < 9; ++i) {
        for (int j = 0; j <11; ++j) {
            cout << stars[i][j] ;
        }
        cout << endl;
    }
    return 0;
}


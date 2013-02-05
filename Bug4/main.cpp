/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 22:49
 */

#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */
extern char *score_cards[];

int count(char *buf, char ch){
    static int total = 0;
    int n;
    char *p;
    if(!buf) {
        n = total;
        total = 0;
        return n;
    }
    for( p = buf; *p; p++ )
        if( *p == ch ) total++;
    return total;
}
int main(int argc, char** argv) {
    int i;
    cout << "count :" <<count( "this is a test of K and K should need to test. And K was not tested", 'e' );
    cout << "count :" <<count( 0, 'K' );
    return 0;
}


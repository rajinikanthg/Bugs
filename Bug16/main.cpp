/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 5. helmikuuta 2013, 17:39
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "barroom.h"

using namespace std;

/*
 * 
 */
Dbl get_price( Dbl cost ) {
    return cost * (2 + pow(.9,volume) );
}
int main(int argc, char** argv) {
    
    Dbl price_drink = get_price( 1.25 );
    cout << price_drink;
    return 0;
}


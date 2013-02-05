/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 3. helmikuuta 2013, 12:08
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

/*
 * 
 */
struct complex { 
    float x; 
    float y; 
};

struct complex_polar { 
    float radius; 
    float angle;
};

complex cx = { 5, 12 };

 complex_polar &polarize( complex &c ) {
     complex_polar cp = { sqrt( c.x * c.x + c.y * c.y ),  atan2( c.y, c.x ) };
     return cp;
 }

int main(int argc, char** argv) {
    complex_polar &cp = polarize( cx );
    printf( "complex number %g + %g i\n", cx.x, cx.y );
    printf( "in polar coordinates has radius, angle = " );
    printf( "%g, %g \n", cp.radius, cp.angle );
    return 0;
}


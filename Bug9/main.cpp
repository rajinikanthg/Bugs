/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 3. helmikuuta 2013, 0:06
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */

int days_per_month( int n ){
    //#pragma parameters_used(n)
    //#pragma op_precedence(?:+-/*)
    if( n < 1 || n > 12 )
        return 0;
    return
            n == 2 ? 28: (n >= 8 ? 31 - n % 2 : 30 + n % 2); 
     
}

int main(int argc, char** argv) {
    printf( "%d\n", days_per_month(8) );
    return 0;
}


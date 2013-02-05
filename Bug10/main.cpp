/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 3. helmikuuta 2013, 0:16
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */

struct Card {
    char *msg;
    Card() {
        msg = new char[100];
        strcpy(msg, "Hello, how is going?");
    }
    
    Card &operator=( const Card & x ) {
         delete[] msg;  
         msg = new char[ strlen(x.msg) + 1 ];
         strcpy( msg, x.msg ); 
         return *this;
    }
    
    ~Card() { 
        delete[] msg; 
    }
};

void process( Card &x1, Card &x2 ) { 
    x1 = x2;
}


int main(int argc, char** argv) {
    Card b;
    process( b, b );
    printf( "%s\n", b.msg );
    return 0;
}


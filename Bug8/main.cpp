/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 23:52
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */

char *sequence = "rocket aerial ball mortar mortar aerial";

void unique(const char *list, char *buf){
    char name[100];
    int k;
    buf[0] = 0;
    for(;;) {
        while(*list == ' ' )
            list++;
        k = sscanf( list, "%s", name );
        if( k != 1 ) break;
        if( !strstr( buf, name ) ){
            strcat( buf, " " );
            strcat( buf, name ); 
        }
        list += strlen(name);
    }
}
int main(int argc, char** argv) {
    char types[1000];
    unique( types, sequence );
    printf( "Fireworks used: %s\n", types );
    return 0;
}


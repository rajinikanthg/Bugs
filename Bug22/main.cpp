/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 6. helmikuuta 2013, 14:00
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Port {
public:
    double latitude, longitude;
    const char *name;
    operator const char* () const {
        return name;
    }
};

const Port itinerary[3] = {
  { 55.7, 12.6, "Copenhagen" },
  { 59.3, 18.1, "Stockholm" },
  { 60.17, 25.0, "Helsinki" }  
};
int main(int argc, char** argv) {
    for( int i = 0; i < 3; i++ )
         printf( "Port #%d, %s\n", i+1, itinerary[i].name);
    return 0;
}


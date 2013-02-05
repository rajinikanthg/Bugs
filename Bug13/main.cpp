/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 3. helmikuuta 2013, 9:52
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*
 * 
 */
 class Reindeer {
 public:
     char *name;
     bool injured;
     bool in_flight;
     bool needs_rest;
 };
 
 const int NumRD = 5;
 extern Reindeer all[ NumRD ] = {
     { "boggy", false, true, true },
     { "toggy", false, true, true },
     { "pinky", true, true, true },
     { "chukky", false, false, false },
     { "pakky", false, false, false },
 };
 int reindeer_available() {
     int n = 0;
     for( int i = 0; i < NumRD; i++ ) {
         if( !all[i].injured && !all[i].in_flight && !all[i].needs_rest )
             n++;        
     }
     return n;
 }

 
int main(int argc, char** argv) {
    cout << "Available: " << reindeer_available();
    return 0;
}


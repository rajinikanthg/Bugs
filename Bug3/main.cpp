/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 21:41
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#define Whiskey 1
#define Vodka 2
#define DryVermouth 4
#define IrishCream       8
#define CrDeCacoa     0x10
#define CrDeMenthe    0x20
#define Grenadine     0x40
#define LimeJuice     0x80

struct Recipe { 
    unsigned id; 
    const char *name;
    unsigned ingred; 
} drinks[] =  {
  
    1, "Wild Irish Rose", Whiskey | Grenadine | LimeJuice,
    2, "Irish Martini", Whiskey | DryVermouth | Vodka,
    3, "Irish Paddy", CrDeCacoa | CrDeMenthe | IrishCream,
    0, "", 0
};


unsigned find_recipe( const char *name ) {
    
    int len = sizeof(drinks)/sizeof(drinks[0]);    
    for( unsigned i = 0; i < len; ++i) {
        if( strcmp( drinks[i].name, name ) == 0 )
             return drinks[i].ingred;        
    }
    return 0;
}

//extern void process( unsigned );

int main(int argc, char** argv) {
    cout << "sizeof(Unsigned) : " << sizeof(unsigned)<< endl;
    cout << "sizeof(const char*) : " << sizeof(const char *)<< endl;
    cout << "sizeof(drinks) : " << sizeof(drinks) << endl;
    cout << "sizeof(drinks)/sizeof(drinks[0]) : " << sizeof(drinks)/sizeof(drinks[0]) << endl;
    cout << "Result : "<<find_recipe( "Wild Irish Rose" ) << endl;
    return 0;
}


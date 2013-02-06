/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 5. helmikuuta 2013, 20:52
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

enum Bread {
    white, 
    rye,
    wheat
};

typedef const char *Str;
class Sandwitch {
private:
    Str name, ingred1, ingred2;
    Bread bread;
public:
    Sandwitch(Str nm, Str ig1, Str ig2, Bread br) {
        name = nm;
        ingred1 = ig1;
        if(ig2)
            ingred2 = ig2;
        bread = br;
    }
    void ingredients(){
        printf( "%s %s %d\n", ingred1, ingred2, bread );
    }
    
};
int main(int argc, char** argv) {
    Sandwitch bh( "Bob Hope", "ham", "cheese", rye );
    Sandwitch ld( "Larry David", "Whitefish", NULL, wheat );
    bh.ingredients();
    ld.ingredients();
    return 0;
}


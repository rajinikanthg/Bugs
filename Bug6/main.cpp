/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 23:31
 */

#include <iostream>
#include <stdio.h>


using namespace std;

/*
 * 
 */

class IntCell {
public:
    explicit IntCell( int initialValue = 0 ) {
        storedValue = new int( initialValue );
    }
    int read( ) const{ 
        return *storedValue; 
    }
    void write( int x ){ 
        *storedValue = x;
    }
    
    private:
      int *storedValue;
};

 int f(){
     IntCell a( 2 );
     IntCell b = a;
     IntCell c;
 
     c = b;
     a.write( 4 );
     cout << a.read( ) << endl << b.read( ) << endl << c.read( ) << endl;
     return 0;
 }

int main(int argc, char** argv) {
    f();
    return 0;
}


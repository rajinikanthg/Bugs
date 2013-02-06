#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

class X {
public:
    int *px;
    X(int value) {
        px = new int;
        *px = value;
    }
    
    ~X(){
        delete px;
    }
};

void print(X x){
    printf("%d\n", *x.px);
}

int main(int argc, char * argv[]){
    
    X x(15);
    print(x);
    cout << "This is something to test"<<endl;
     cout << "This is something to test"<<endl;
      cout << "This is something to test"<<endl;
       cout << "This is something to test"<<endl;
    //x.printX();
    
}
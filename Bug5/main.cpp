/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 23:06
 */

#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int idx = 0;
    unsigned char buf[] = {0x02, 0x01, 0x03, 0x04, 0x05};
   // unsigned char low = buf[++idx];
   // unsigned char high = buf[idx++];
    
    //unsigned short properties = low | high;
    //std::cout<<"props:"<<std::hex<<properties<<std::endl;
    
    unsigned short properties1 = (buf[++idx] | buf[++idx]);
    std::cout<<"props1:"<<std::hex<<properties1<<std::endl;

    return 0;
}


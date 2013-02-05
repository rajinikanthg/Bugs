/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 5. helmikuuta 2013, 18:52
 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

enum tea { 
    cinnamon=1,
    ginseng=2, 
    ginger=4,
    goji=8, 
    anise=0x10, 
    licorice=0x20, 
    kava=0x40,
    clover=0x80,
    hawthorn=0x100, 
    tulsi=0x200
};
typedef int Blend;

Blend StdMix(void);
Blend StdTaste(void); 
Blend StdSpice(void);



Blend WakeUp = ginger | ginseng;
Blend SleepDown = kava | clover;
Blend Throaty = StdMix() | licorice;
Blend TasteGood = StdSpice() | kava;
Blend Spicy = cinnamon | anise;

Blend StdTaste() { 
    return TasteGood | goji; 
}

Blend StdMix() {
    return StdTaste() | hawthorn; 
}

Blend StdSpice() {
    return cinnamon | anise;
}

int main(int argc, char** argv) {

    cout << StdMix() <<endl;
    return 0;
}


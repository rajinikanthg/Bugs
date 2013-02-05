#include "barroom.h"
 Dbl get_volume()
 {
       char *numeral = getenv("VOLUME");
       if( numeral ) 
           return atof(numeral);
       return 0;
 }
 
 Dbl volume = get_volume();

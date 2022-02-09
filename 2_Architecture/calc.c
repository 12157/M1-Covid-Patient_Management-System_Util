/*
* Implement the code and submit only this file
*/

#include <stdio.h>
#include <stdlib.h>

#include "calc.h"
int compute(char *str){

int x=atoi(str);
char c=str[1];
int y=atoi(str+2);
if (c=='+'){
    return x+y;
}
if (c=='-'){
    return x-y;
}
if(c=='*'){
    return x*y;
}
if(c =='/' && y!=0){
    float z=(float)x/(float)y;
        return round(z);
    
}return 0;
}


#include "stdio.h"
char * myval;

int main(int argc, char *argv[])
{
        myval = argv[1];
        while(1){
                printf("myval is %s,loc 0x%lx\n",myval,(long)&myval);
        }
}


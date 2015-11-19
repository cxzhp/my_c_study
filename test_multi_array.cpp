#include<stdio.h>

int main()
{
        int int_array[3][5] = {
                {1,2,3,4,5},
                {21,22,23,24,25},
                {31,32,33,34,35}
        };

        int *pi = int_array[0];

        int i;
        for(i=0;i<10;i++){
                printf("%d: -> val: %d\n",i,pi[i]);
        }
        
        int (*p)[5] = int_array;
        for(i=0;i<3;i++){
                printf("%d: -> val: %lu\n",i,sizeof(p[i])/sizeof(p[i][0]));
        }

        return 0;
}

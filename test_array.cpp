#include<stdio.h>

int main()
{
        int int_array[5] = {1,2,3,4,5};

        int len = sizeof(int_array)/sizeof(int_array[0]); // 数组长度

        int i;
        printf("count:%d\n",len);
        for(i=0;i<len;i++){
                printf("%d: -> val: %d\n",i,int_array[i]);
        }
        
        return 0;
}

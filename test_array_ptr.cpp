#include<stdio.h>

int main()
{

        /*
        * ptr: 0x7fff5d5dfa80
        * ptr_element: 0x7fff5d5dfa88
        * ptr_element_val: 3
        * ptr_array: 0x7fff5d5dfa80
        * count:5
        * 0: -> val: 1
        * 1: -> val: 2
        * 2: -> val: 3
        * 3: -> val: 4
        * 4: -> val: 5
        */

        int int_array[5] = {1,2,3,4,5};
        int len = sizeof(int_array)/sizeof(int_array[0]); // 数组长度

        int (*ptr)[5] = &int_array;
        printf("ptr: %p\n",ptr);

        int *ptr_element = &int_array[2];
        printf("ptr_element: %p\n",ptr_element);

        printf("ptr_element_val: %d\n",*ptr_element);

        int *ptr_array = int_array;
        printf("ptr_array: %p\n",ptr_array);


        int i;
        printf("count:%d\n",len);
        for(i=0;i<len;i++){
                printf("%d: -> val: %d\n",i,int_array[i]);
        }
        
        return 0;
}

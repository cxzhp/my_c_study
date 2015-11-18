#include<stdio.h>
#include <iostream>

/**
//ptr in function is a new copy
/////////////
// addr_for__string: 0x7fff5a2c1aa8
// val_addr_for__string: 0x10593ef8c
// addr_for__string_in_function: 0x7fff5a2c1a70   //new copy
// val_addr_for__string_in_function : 0x10593ef8c
// val_for_string_in_while: b
// val_addr_for_string_in_while: 0x10593ef8d
// val_for_string_in_while: c
// val_addr_for_string_in_while: 0x10593ef8e
// val_for_string_in_while: d
// val_addr_for_string_in_while: 0x10593ef8f
// val_for_string_in_while: e
// val_addr_for_string_in_while: 0x10593ef90
// val_for_string_in_while:
// val_addr_for_string_in_while: 0x10593ef91
// after_function_addr_for__string: 0x7fff5a2c1aa8
// after_function_val_addr_for__string: 0x10593ef8c
/////////////
*/

void my_strcpy(char *buffer, const char *string){
        const char ** ptr =  & string;

        printf("addr_for__string_in_function: %p\n", ptr);
        printf("val_addr_for__string_in_function : %p\n", *ptr);

        while((*buffer++ = *string++) != '\0'){
                printf("val_for_string_in_while: %c\n", *string);
                printf("val_addr_for_string_in_while: %p\n", string);
        }
}

int main()
{

        char *buf;
        const char *string = "abcde\0";

        const char ** ptr =  & string;
        printf("addr_for__string: %p\n", ptr);
        printf("val_addr_for__string: %p\n", *ptr);



        my_strcpy(buf,string);

        printf("after_function_addr_for__string: %p\n", ptr);
        printf("after_function_val_addr_for__string: %p\n", *ptr);
        return 0;
}


#include<stdio.h>
#include <iostream>

void my_strcpy(char *buffer, const char *string){
        while((*buffer++ = *string++) != '\0'){
                printf("mem_addr_string_in_while: %p\n", string);
        }
}

int main()
{

        char *buf;
        const char *string = "abcde\0";


        //ptr in function is a new copy
        ///////////////
        //mem_addr_string_start: 0x10686ef8d
        //mem_addr_string_in_while: 0x10686ef8e
        //mem_addr_string_in_while: 0x10686ef8f
        //mem_addr_string_in_while: 0x10686ef90
        //mem_addr_string_in_while: 0x10686ef91
        //mem_addr_string_in_while: 0x10686ef92
        //buf: abcde
        //string: abcde
        //mem_addr_string_end: 0x10686ef8d
        ///////////////

        printf("mem_addr_string_start: %p\n", string);
        my_strcpy(buf,string);
        printf("buf: %s\n", buf);
        printf("string: %s\n", string);
        printf("mem_addr_string_end: %p\n", string);
        return 0;
}


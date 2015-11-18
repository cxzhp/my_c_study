#include<stdio.h>
#include <iostream>

/**
  addr_for__buf: 0x7fff5af47a90
  val_addr_for__buf: 0x7fff5af47ab0
  val_for_buf_before_function:
  addr_for_buf_before_while_in_function: 0x7fff5af47ab0
  val_for_buf_before_while:
  addr_for__buf_in_function: 0x7fff5af47a48
  val_addr_for__buf_in_function : 0x7fff5af47ab0
  val_for_buf_in_while:
  val_addr_for_buf_in_while: 0x7fff5af47ab1
  val_for_buf_in_while:
  val_addr_for_buf_in_while: 0x7fff5af47ab2
  val_for_buf_in_while:
  val_addr_for_buf_in_while: 0x7fff5af47ab3
  val_for_buf_in_while:
  val_addr_for_buf_in_while: 0x7fff5af47ab4
  val_for_buf_in_while:
  val_addr_for_buf_in_while: 0x7fff5af47ab5
  addr_for_buf_after_while_in_function: 0x7fff5af47ab6
  val_for_buf_after_while:
  val_for_buf_after_function: abcde
  after_function_addr_for__buf: 0x7fff5af47a90
  after_function_val_addr_for__buf: 0x7fff5af47ab0
*/

void my_strcpy(char *buffer, const char *string){
        char ** ptr =  & buffer;

        printf("addr_for_buf_before_while_in_function: %p\n", buffer);
        printf("val_for_buf_before_while: %s\n", buffer);

        printf("addr_for__buf_in_function: %p\n", ptr);
        printf("val_addr_for__buf_in_function : %p\n", *ptr);

        while((*buffer++ = *string++) != '\0'){
                //because has ++, so cur ptr is empty
                printf("val_for_buf_in_while: %c\n", *buffer);
                printf("val_addr_for_buf_in_while: %p\n", buffer);
        }

        printf("addr_for_buf_after_while_in_function: %p\n", buffer);
        printf("val_for_buf_after_while: %s\n", buffer);
}

int main()
{

        char *buf;
        const char *string = "abcde\0";

        char ** ptr =  & buf;
        printf("addr_for__buf: %p\n", ptr);
        printf("val_addr_for__buf: %p\n", *ptr);



        printf("val_for_buf_before_function: %s\n", buf);
        my_strcpy(buf,string);
        printf("val_for_buf_after_function: %s\n", buf);

        printf("after_function_addr_for__buf: %p\n", ptr);
        printf("after_function_val_addr_for__buf: %p\n", *ptr);
        return 0;
}


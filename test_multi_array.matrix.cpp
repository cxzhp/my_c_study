#include<stdio.h>
#include<string.h>

char const keyword[][9] = {
        "do",
        "for",
        "if",
        "register",
        "return",
        "switch",
        "while"
};

//char const * keyword[] = {
//        "do",
//        "for",
//        "if",
//        "register",
//        "return",
//        "switch",
//        "while"
//};


#define N_KEYWORD ( sizeof(keyword) / sizeof( keyword[0] ))

int lookup_keyword (char const * const desired_word, char const keyword_table[][9] , int const size){
        char const *kwp;
        
        printf("size: %d\n",size);

        int i;
        for (kwp = *keyword_table; kwp < *keyword_table + size; kwp=kwp+9){
                i++;
                printf("i: %d\n",i);

                printf("kwp_addr: %p\n",&kwp);
                printf("kwp_addr_1: %c\n",*kwp);
                printf("kwp_val_string: %s\n",kwp);


                //printf("keyword_table_addr: %p\n",keyword_table);
                //printf("keyword_table_val: %s\n",*keyword_table);
                if( strcmp( desired_word , kwp) == 0 ){
                        return (kwp - *keyword_table)/9;
                }
        }
        
        return -1;
}


int main()
{
        const char * const txt = "while";
        int ret = lookup_keyword(txt,keyword,sizeof(keyword));
        printf("ret: %d\n",ret);

        //int int_array[3][5] = {
        //        {1,2,3,4,5},
        //        {21,22,23,24,25},
        //        {31,32,33,34,35}
        //};

        //int *pi = int_array[0];

        //int i;
        //for(i=0;i<10;i++){
        //        printf("%d: -> val: %d\n",i,pi[i]);
        //}
        //
        //int (*p)[5] = int_array;
        //for(i=0;i<3;i++){
        //        printf("%d: -> val: %lu\n",i,sizeof(p[i])/sizeof(p[i][0]));
        //}

        return 0;
}


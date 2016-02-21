#include<stdio.h>
#include<string.h>

char const * keyword[] = {
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

int lookup_keyword (char const * const desired_word, char const *keyword_table[] , int const size){
        char const **kwp;

        for (kwp = keyword_table; kwp < keyword_table + size; kwp++){
                if( strcmp( desired_word , *kwp) == 0 ){
                        return kwp - keyword_table;
                }
        }
        
        return -1;
}


int main()
{
        const char * const txt = "for";
        int ret = lookup_keyword(txt,keyword,N_KEYWORD);
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


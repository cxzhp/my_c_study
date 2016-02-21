#include<stdio.h>

int turn = 0;

void critical_region(){
        //临界区逻辑

        //轮到下一个进程了
        if(1 == turn){
                printf("turn:%d line:%d\n",turn,__LINE__);
                turn = 0;//该0号进程进临界区了
        }else if(0 == turn){
                printf("turn:%d line:%d\n",turn,__LINE__);
                turn = 1;//该1号进程进临界区了
        }
        
        printf("turn:%d line:%d\n",turn,__LINE__);
}

int main()
{

        while(turn != 0) 
                critical_region();
                printf("turn:%d\n",turn);
                printf("1\n");
                printf("2\n");

}

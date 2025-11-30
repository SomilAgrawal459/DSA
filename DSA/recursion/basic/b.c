#include <stdio.h>

void fun(int x){
    if(x>0){
        printf("%d\n",x);
        x=x-1;
        fun(x);
    }
}

int main()
{
    printf("Hello World\n");
    fun(5);
    return 0;
}
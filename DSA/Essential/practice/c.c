#include <stdio.h>

int area(int length, int breath){
    int a;
    a=length*breath;
    return a;
}

int perimeter(int length, int breath){
    int p;
    p=2*(length+breath);
    return p;
}

int main(){
    int length,breath;
    printf("Enter the length and breath of the figure : ");
    scanf("%d %d",&length,&breath);
    int a=area(length, breath);
    int p=perimeter(length, breath);
    printf("The area and perimeter are : %d %d ",a,p);
}
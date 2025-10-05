#include <stdio.h>

struct rectangle{
    int length;
    int breath;
};

int area (struct rectangle r){
    int a;
    a=r.length*r.breath;
    return a;
}

int perimeter (struct rectangle r){
    int p;
    p=2*(r.length+r.breath);
    return p;
}

int main(){
    struct rectangle r;
    int length,breath;
    printf("Enter the length and breath of the figure : ");
    scanf("%d %d",&r.length,&r.breath);
    int a=area(r);
    int p=perimeter(r);
    printf("The area and perimeter are : %d %d ",a,p);
}
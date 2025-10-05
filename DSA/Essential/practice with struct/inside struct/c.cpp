#include <stdio.h>
#include <iostream>

using namespace std;

struct rectangle{
    int length;
    int breath;

int area (){
    int a;
    a=length*breath;
    return a;
}

int perimeter (){
    int p;
    p=2*(length+breath);
    return p;
}
};

int main(){
    struct rectangle r;
    int length,breath;
    printf("Enter the length and breath of the figure : ");
    scanf("%d %d",&r.length,&r.breath);
    int a=r.area();
    int p=r.perimeter();
    printf("The area and perimeter are : %d %d ",a,p);
}
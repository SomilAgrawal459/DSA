#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int l, int b) {
        length=l;
        breadth=b;
    }
    // ~rectangle()
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    int getlength(int length){
        return length;
    }
    int getbreadth(int breadth){
        return breadth;
    }
    int changelength(int l){
        length=l;
        return length;
    }
    int changebreadth(int b){
        breadth=b;
        return breadth;
    }
};

int main(){
rectangle r(5,10);
cout<<"The area is "<<r.area()<<endl;
cout<<"The perimeter is "<<r.perimeter();
return 0;
}
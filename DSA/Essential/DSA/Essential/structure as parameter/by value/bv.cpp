#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breath;
};

int area(struct rectangle r){
    r.length++;
    return r.length*r.breath;
    
}

int main()
{
    struct rectangle r={10,5};
    cout<<"The area is "<<area(r)<<endl;
    cout<<r.length<<endl<<r.breath<<endl;

    return 0;
}
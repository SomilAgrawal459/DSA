#include<iostream>
using namespace std;

template<class T>
class arthmetic{
    private:
    T a;
    T b;

    public:
    arthmetic(T a,T b){
        this->a=a;
        this->b=b;
    }

    T add(){
        T c;
        c=a+b;
        return c;
    }

    T sub(){
        T d;
        d=a-b;
        return d;
    }
};

int main(){
    arthmetic<int> f(0,5);
    cout<<f.add()<<endl;
    arthmetic<float> h(5.1,6.3);
    cout<<h.sub()<<endl;
    return 0;
}
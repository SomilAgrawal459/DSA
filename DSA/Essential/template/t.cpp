#include<iostream>
using namespace std;

template<class T>
class arthmetic{
    private:
    T a;
    T b;

    public:
    arthmetic(T a,T b);
    T add();
    T sub();
};

template<class T>
arthmetic<T>::arthmetic(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>
T arthmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}

template<class T>
T arthmetic<T>::sub(){
    T d;
    d=a-b;
    return d;
}

int main(){
    arthmetic<int> f(0,5);
    cout<<f.add()<<endl;
    arthmetic<float> h(5.1,6.3);
    cout<<h.sub()<<endl;
    return 0;
}
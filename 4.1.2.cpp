#include<iostream>
using namespace std;

class myAdd{
public:
    int operator()(int v1, int v2){
        return v1 + v2;
    }
};

//1 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
void test01(){
    //创建函数对象
    myAdd add;

    //像函数一样调用函数对象
    int result = add(3, 4);

    cout<<"3 + 4 = "<<result<<endl;
}

//2 函数对象超出普通函数的概念，函数对象可以有自己的状态
class myPrint{
public:
    myPrint(){
        this->count = 0;
    }
    void operator()(string test){
        cout<<test<<endl;
        count++;
    }
    int count;  //internal status
};

void test02(){
    myPrint p;
    p("hello world");
    p("hello world");
    p("hello world");
    p("hello world");

    cout<<"myPrint call times: "<<p.count<<endl;
}

//3 函数对象可以作为参数传递
void doPrint(myPrint &p, string test){
    p(test);
}

void test03(){
    myPrint p;
    doPrint(p,"hello c++");
}

int main(){

    test01();
    test02();
    test03();

    return 0;
}
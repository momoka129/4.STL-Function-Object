#include<iostream>
#include<functional>
using namespace std;

//negate --unary predicate
void test01(){
    
    negate<int> n;

    cout<<"inverse of 50"<<n(50)<<endl;
}

void test02(){

    //only allow the same data type
    plus<int> p;

    cout<<"3 + 4 = "<<p(3,4)<<endl;
}

int main(){

    test01();
    test02();

    return 0;
}

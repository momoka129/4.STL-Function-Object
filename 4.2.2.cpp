#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class GreaterFive{
public:
    bool operator()(int a){
        return a > 5;
    }
};

void test01(){

    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

    //find out whether the container has numbers larger than five
    //GreaterFive() is a anonymous function object
    //find_if is used to find the first element that match the condition
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if(it == v.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found: "<<*it<<endl;
        cout<<"All numbers greater than 5: "<<endl;
        for(; it < v.end(); it++){
            //if(GreaterFive()(*it)){
                cout<<*it<<" ";
            //}
        }
        cout<<endl;
    }
}

int main(){
    
    test01();

    return 0;
}
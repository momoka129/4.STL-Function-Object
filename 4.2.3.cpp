#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

//binary predicate
class myCompare{
public:
    bool operator()(int a, int b){
        return a > b;
    }
};

void test01(){

    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);

    sort(v.begin(), v.end());

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end(), myCompare());

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){

    test01();

    return 0;
}
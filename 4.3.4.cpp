#include<iostream>
#include<functional>
using namespace std;
#include<vector>
#include<algorithm>

void test01(){

    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for(vector<bool>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //利用逻辑非 将容器v的数据搬运到容器v2 并执行取反操作
    //Use logical NOT to move the data in container v to container v2 and perform the inversion operation
    vector<bool> v2;
    v2.resize(v.size());

    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

    for(vector<bool>::iterator it = v2.begin(); it != v2.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){

    test01();

    return 0;
}
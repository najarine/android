#include<iostream>
using namespace std;
class mim
{
    public:
        int a,b;
        input(){
            cin>>a>>b;
        }
};
class a1:public mim
{
public:
    display1(){
        cout<<"multiplication is"<<a*b<<endl;
    }
};
class b2:public mim
{
public:
    display2(){
        cout<<"summation is:"<<a+b<<endl;
    }
};
int main(){
    a1 obj1;
    b2 obj2;

    obj1.display1();
    obj2.display2();
    return 0;
}

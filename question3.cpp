#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    void swap(A *b)
    {
        int temp;
        temp= a;
        a= b->a;
        b->a=temp;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main()
{
    A a1(2),a2(5);
    a1.swap(&a2);
    a1.display();
    a2.display();
}
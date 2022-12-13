#include<iostream>
#define PI 3.14
using namespace std;

class shape{
    protected:
    double x,y;
    public:
    void set_data(double x ,double y=0){
        this->x = x;
        this->y = y;
    }
    virtual void display_area()=0;
};

class circle: public shape{
    public:
    void display_area()
    {
        cout<<"Area of circle is "<< PI * x * x<<endl;
    }
};

int main()
{
    circle c;
    c.set_data(4.4);
    c.display_area();

    return 0;
}
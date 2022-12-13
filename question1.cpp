#include<iostream>
using namespace std;

class shape
{
    protected:
    double x,y;
    public:
    void set_data(double l , double m)
    {
        x=l;
        y=m;
    }
    virtual void display_area()=0;
};

class rectangle: public shape
{
    public:
    void display_area()
    {
        cout<<"Area of rectangle is "<<x* y<<endl;
    }

};
class triangle: public shape{
    public:
    void display_area()
    {
        cout<<"Area of triangle is "<< x* y/2.0 <<endl;
    }
};

int main()
{
    rectangle r;
    r.set_data(3,4);
    r.display_area();
    triangle t;
    t.set_data(3,4.5);
    t.display_area();

    return 0;
}
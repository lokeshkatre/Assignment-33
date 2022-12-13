#include<iostream>
#define PI 3.14
using namespace std;

class shape
{
    protected:
    double x,y;
    public:
    void set_data(double l , double m=0)
    {
        x=l;
        y=m;
    }
    virtual void display_area()=0;
};

class rectangle: public shape
{
    public:
    rectangle(){}
    void display_area()
    {
        cout<<"Area of rectangle is "<<x* y<<endl;
    }

};
class triangle: public shape{
    public:
    triangle(){}
    void display_area()
    {
        cout<<"Area of triangle is "<< x* y/2.0 <<endl;
    }
};

class circle: public shape{
    public:
    circle(){}
    void display_area()
    {
        cout<<"Area of circle is "<< PI * x * x<<endl;
    }
};
int main()
{
    
    while(1)
    {
        int n;
        cout<<"\n1.Triangle"<<endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Circle"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter choice : "<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
            {
            triangle t;
            int b,h;
            cout<<"Enter height of triangle : "<<endl;
            cin>>b;
            cout<<"Enter base of triangle   : "<<endl;
            cin>>h;
            t.set_data(b,h);
            t.display_area();
            }
            break;

            case 2:
            {
            rectangle r;
            int b,h;
            cout<<"Enter height of rectangle : "<<endl;
            cin>>b;
            cout<<"Enter base of rectangle   : "<<endl;
            cin>>h;
            r.set_data(b,h);
            r.display_area();
            }
            break;

            case 3:
            {
            circle c;
            double rad;
            cout<<"Enter radius of circle : "<<endl;
            cin>>rad;
            c.set_data(rad);
            c.display_area();
            }
            break;

            case 4:
            exit(0);
            default :
            break;
        }
    }
    return 0;
}

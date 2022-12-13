#include<iostream>
using namespace std;

class  matrix
{
    protected:
    int a,b,c,d;
    public:
    matrix(int a, int b, int c,int d)
    {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
};
class calculate_determinant: public matrix{
    private:
    float determinant;
    public:
    calculate_determinant(int a,int b,int c,int d):matrix (a, b, c,d)
    {
    }
    float calDeterminant()
    {
        determinant = a*d - c*d;
        return determinant;
    }
};

int main()
{
    calculate_determinant m(1,2,3,4);
    cout<<m.calDeterminant()<<endl;

    return 0;
}
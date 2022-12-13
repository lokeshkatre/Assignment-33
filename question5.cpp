#include<iostream>
#include<math.h>
using namespace std;

class photon
{
    protected:
     double wavelenght;
    public:
    photon(double wavelegnth){
        this->wavelenght = wavelenght/ pow(10,-10);
    }
};
class photonEnergy: public photon{
   private:
    double E;
   public:
   photonEnergy(double wavelength): photon(wavelenght){

   }
   void calEnergy()
   {
     E = 6.626* (pow(10,-34))*3*(pow(10,8))/wavelenght;
     cout<<"Photon energy is "<<E<<endl;
   }
};
int main()
{
    photonEnergy p(4);
    p.calEnergy();

}
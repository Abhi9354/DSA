#include <iostream>
using namespace std;
class Complex
{
    int a, b;
friend Complex sumComplex(Complex num1,Complex num2);
public:
    void printData()
    {
        cout<<"The no is "<<a<<"+"<<b<<"i"<<endl;
    }
    void setData(int n1, int n2);
    
};
 void Complex:: setData(int n1, int n2)
    {
        a= n1;
        b= n2;
    }
Complex sumComplex(Complex c1,Complex c2){
Complex num3;
num3.setData((c1.a+ c2.a),(c1.b+c2.b));
return num3;
}
int main()
{
                                 /*   Complex *c1=new Complex();
                                    Complex*sum=new Complex();
   
                                    c1->setData(5,8);
                                    Complex* c2 = new Complex();
                                    c2->setData(7,8);
                                    c1->printData();
                                    c2->printData();
                                   * sum = sumComplex(*c1,*c2);
                                    sum->printData();*/
  Complex c1, c2, sum;
    c1.setData(1, 4);
    c1.printData();

    c2.setData(5, 8);
    c2.printData();

    sum = sumComplex(c1, c2);
    sum.printData();
    return 0;

}
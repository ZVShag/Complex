
#include <iostream>
using namespace std;
class Complex
{
    float vesh;
    int mnim;
public:
    Complex(float a, int b) { vesh = a; mnim = b; }

    void Compsum(Complex a, Complex b)
    {
        cout << a.vesh + b.vesh <<" + "<< a.mnim + b.mnim<<"i";
    }

    void Comprazn(Complex a, Complex b)
    {
        cout << a.vesh - b.vesh << " + " << a.mnim - b.mnim<<"i";
    }

    void Compproiz(Complex a, Complex b)
    {
        cout << a.vesh * b.vesh - a.mnim*b.mnim << " + " << a.mnim*b.vesh+b.mnim*a.vesh << "i";
    }



};
int main()
{
    
}


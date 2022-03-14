
#include <iostream>
using namespace std;
class Complex
{
    float vesh;
    int mnim;
public:
    Complex(float a, int b) { vesh = a; mnim = b; }

    float Vesh() { return vesh; }
    int Mnim() { return mnim; }

    void Compsum(Complex b)
    {
        cout << vesh + b.Vesh() << " + " << mnim + b.Mnim() << "i";
    }
    void Print()
    {
        cout << vesh<< " + " << mnim<< "i";
    }

    void Comprazn(Complex b)
    {
        cout << vesh - b.Vesh() << " + " << mnim - b.Mnim() << "i";
    }

    void Compproiz(Complex a, Complex b)
    {
        cout << vesh * b.Vesh() - mnim * b.Mnim() << " + " << mnim * b.Vesh() + b.Mnim() * vesh << "i";
    }



};
int main()
{
    Complex num1(2, 3);
    Complex num2(2, 3);
    num2.Compsum(num1);
}
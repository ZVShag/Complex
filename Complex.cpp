
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
        cout << vesh + b.Vesh() << " + " << mnim + b.Mnim() << "i"<<endl;
    }
    void Print()
    {
        cout << vesh<< " + " << mnim<< "i"<<endl;
    }

    void Comprazn(Complex b)
    {
        if (mnim - b.Mnim()>0)
            cout << vesh - b.Vesh() << " + " << mnim - b.Mnim() << "i"<<endl;
        else
            cout << vesh - b.Vesh() << " " << mnim - b.Mnim() << "i" << endl;

    }

    void Compproiz(Complex b)
    {
        cout << vesh * b.Vesh() - mnim * b.Mnim() << " + " << mnim * b.Vesh() + b.Mnim() * vesh << "i"<<endl;
    }



};
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex num1(a, b);
    Complex num2(c, d);
    num2.Compsum(num1);
    num2.Compproiz(num1);
}
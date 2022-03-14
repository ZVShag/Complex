
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Complex
{
    float vesh;
    int mnim;
public:
    Complex(float a, int b) { vesh = a; mnim = b; }

    float Vesh() { return vesh; }
    int Mnim() { return mnim; }

    string Compsum(Complex b)
    {
        int nvesh = vesh + b.Vesh();
        int nmnim = mnim + b.Mnim();
        auto svesh = to_string(nvesh)+" + "+to_string(nmnim)+"i";
        return svesh;



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
    ofstream fout("rezult.txt", ios_base::out | ios_base::trunc);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex num1(a, b);
    Complex num2(c, d);
    fout<<num2.Compsum(num1);
    num2.Compproiz(num1);
}
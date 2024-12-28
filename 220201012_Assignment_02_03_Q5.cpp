#include <iostream>
using namespace std;

class Distance
{
    int feet,inches;

    public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int a, int b)
    {
        while (b>=12)
        {
            b -= 12;
            a += 1;
        }
        feet = a;
        inches = b;
    }
    void setFeet(int f)
    {
        feet = f;
    }
    int getFeet()
    {
        return feet;
    }
    void setInches(int i)
    {
        while (i>=12)
        {
            i -= 12;
            feet += 1;
        }
        inches = i;
    }
    int getInches()
    {
        return inches;
    }

    Distance operator + (const Distance &obj)
    {
        Distance d;
        d.feet = feet + obj.feet;
        d.inches = inches + obj.inches;
        while (d.inches>=12)
        {
            d.inches -= 12;
            d.feet += 1;
        }
        return d;
    }

    Distance operator - (const Distance &obj)
    {
        Distance d;
        if (inches<obj.inches)
        {
            d.inches = inches - obj.inches + 12;
            d.feet = feet - obj.feet -1;
        }
        else
        {
            d.inches = inches - obj.inches;
            d.feet = feet - obj.feet;
        }
        return d;
    }

    Distance operator = (const Distance &obj)
    {

        feet = obj.feet;
        inches = obj.inches;
    
    return *this;

    }
};

int main()
{
    Distance d1(1,0);
    cout<<"Distance 1 is:"<<endl<<d1.getFeet()<<" feet and "
        <<d1.getInches()<<" inches."<<endl<<endl;
    
    Distance d2(0,9);
    cout<<"Distance 2 is:"<<endl<<d2.getFeet()<<" feet and "
        <<d2.getInches()<<" inches."<<endl<<endl;

    Distance d3;
    d3.setFeet(7);
    d3.setInches(14);
    cout<<"Distance 3 is:"<<endl<<d3.getFeet()<<" feet and "
        <<d3.getInches()<<" inches."<<endl<<endl;


    Distance d4;
    d4 = d2 + d3;
    cout<<"Distance 4 = Distance 2 + Distance 3:"<<endl<<d4.getFeet()<<" feet and "
        <<d4.getInches()<<" inches."<<endl<<endl;

    Distance d5;
    d5 = d1 - d2;
    cout<<"Distance 5 = Distance 1 - Distance 2:"<<endl<<d5.getFeet()<<" feet and "
        <<d5.getInches()<<" inches."<<endl<<endl;

    Distance d6;
    d6 = d1;
    cout<<"Distance 6 = Distance 1 (assignment operator):"<<endl<<d6.getFeet()<<" feet and "
        <<d6.getInches()<<" inches."<<endl<<endl;


    return 0;

}
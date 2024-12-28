#include <iostream>
using namespace std;

class Base
{
    protected:
    float Length_or_Base;
    float Width_or_Height;

    public:
    Base()
    {
        cout<<"called"<<endl;
        Length_or_Base = 0.0;
        Width_or_Height = 0.0;
    }
    Base(float base,float height)
    {
        Length_or_Base = base;
        Width_or_Height = height;
    }
    void setLength(float base)
    {
        Length_or_Base = base;
    }
    void setWidth(float height)
    {
        Width_or_Height = height;
    }
    float getLength()
    {
        return Length_or_Base;
    }
    float getWidth()
    {
        return Width_or_Height;
    }
};

class Rectangle:public Base
{
    public:
    Rectangle()
    {
        Length_or_Base = 0.0;
        Width_or_Height = 0.0;
    }
    Rectangle(float base,float height)
    {
        Length_or_Base = base;
        Width_or_Height = height;
    }
    void rectangleSetter(float base,float height)
    {
        Length_or_Base = base;
        Width_or_Height = height;        
    }
    void rectangleGetter()
    {
        cout<<"Length is "<<Length_or_Base;
        cout<<"Width is "<<Width_or_Height;
    }
    float areaOfRectangle()
    {
        return Length_or_Base * Width_or_Height;
    }
};

class Triangle:public Base
{
    public:
    Triangle()
    {
        Length_or_Base = 0.0;
        Width_or_Height = 0.0;
    }
    Triangle(float base,float height)
    {
        Length_or_Base = base;
        Width_or_Height = height;
    }
    void triangleSetter(float base,float height)
    {
        Length_or_Base = base;
        Width_or_Height = height;        
    }
    void triangleGetter()
    {
        cout<<"Length is "<<Length_or_Base;
        cout<<"Width is "<<Width_or_Height;
    }
    float areaOfTriangle()
    {
        return Length_or_Base * Width_or_Height /2;
    }
};

class Square:public Base
{
    public:
    Square()
    {
        Length_or_Base = 0.0;
        Width_or_Height = 0.0;
    }
    Square(float base)
    {
        Length_or_Base = base;
        Width_or_Height = base;
    }
    void squareSetter(float base)
    {
        Length_or_Base = base;
        Width_or_Height = base;        
    }
    void squareGetter()
    {
        cout<<"Length is "<<Length_or_Base;
        cout<<"Width is "<<Width_or_Height;
    }
    float areaOfSquare()
    {
        return Length_or_Base * Width_or_Height;
    }
};

int main()
{
    Square sqr;
    Triangle trgl;
    Rectangle rct;

    sqr.setLength(4);
    sqr.setWidth(4);
    cout<<endl<<"The length of square = "<<sqr.getLength()<<endl;
    cout<<"Area of square = "<<sqr.areaOfSquare()<<endl<<endl;
    
    trgl.setLength(3);
    trgl.setWidth(5);
    cout<<"Base of triangle = "<<trgl.getWidth()<<endl;
    cout<<"Height of triangle = "<<trgl.getLength()<<endl;
    cout<<"Area of triangle = "<<trgl.areaOfTriangle()<<endl<<endl;

    rct.setLength(3);
    rct.setWidth(5);
    cout<<"Length of rectangle = "<<rct.getLength()<<endl;
    cout<<"Width of rectangle = "<<rct.getWidth()<<endl;
    cout<<"Area of rectangle = "<<rct.areaOfRectangle()<<endl;

    return 0;
}
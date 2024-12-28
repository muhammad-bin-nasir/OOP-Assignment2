#include <iostream>
using namespace std;

class Computer
{
    string companyName;
    int price;

    public:
    Computer()
    {
        companyName = "NULL";
        price = 0;
    }
    Computer(string name,int Price)
    {
        companyName = name;
        price = Price;
    }
    void setCompany(string name)
    {
        companyName = name;
    }
    void setPrice(int pri)
    {
        price = pri;
    }
    string getCompany()
    {
        return companyName;
    }
    int getPrice()
    {
        return price;
    }
    void show()
    {
        cout<<"Company: "<<companyName<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

class Desktop:public Computer
{
    string color;
    float monitorSize;
    string processorType;

    public:
    Desktop()
    {
        color = "NULL";
        monitorSize = 0;
        processorType = "NULL";
    }
    Desktop(string name,int Price,string Color,int size,string type):Computer(name,Price),
    color(Color),monitorSize(size),processorType(type){}
    void setColor(string Color)
    {
        color = Color;
    }
    void setType(string type)
    {
        processorType = type;
    }    
    void setSize(int size)
    {
        monitorSize = size;
    }
    string getColor()
    {
        return color;
    }
    int getSize()
    {
        return monitorSize;
    }    
    string getType()
    {
        return processorType;
    }
    
    void show()
    {
        Computer::show();     
        cout<<"Color: "<<color<<endl;
        cout<<"Monitor Size: "<<monitorSize<<endl;
        cout<<"Processor Type: "<<processorType<<endl;
    }
};

class Laptop:public Computer
{
    string color;
    float size;
    float weight;
    string processorType;
    
    public:
    Laptop()
    {
        color = "NULL";
        size = 0;
        weight = 0;
        processorType = "NULL";
    }
    Laptop(string name,int Price,string Color,float Size,float Weight,string type):Computer(name,Price),
    color(Color),size(Size),processorType(type),weight(Weight){}
    void setColor(string Color)
    {
        color = Color;
    }
    void setType(string type)
    {
        processorType = type;
    }    
    void setSize(float Size)
    {
        size = Size;
    }
    void setWeight(float Weight)
    {
        weight = Weight;
    }
    string getColor()
    {
        return color;
    }
    int getSize()
    {
        return size;
    }    
    string getType()
    {
        return processorType;
    }
        
    void show()
    {
        Computer::show();
        cout<<"Color: "<<color<<endl;
        cout<<"Size: "<<size<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Processor Type: "<<processorType<<endl;
    }
};

int main()
{
    Laptop lap("Dell",150000,"Black",17,160,"Ryzen 7 5700U");
    Desktop dsk("Alienware",275000,"White",32,"Ryzen 7 5800X3D");
    lap.show();
    cout<<endl;
    dsk.show();
    cout<<endl;
    
    return 0;
}
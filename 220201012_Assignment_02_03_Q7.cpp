#include <iostream>
using namespace std;

class Product
{
    int quantity;
    static int objCount;
    int serialNo;

    public:
    Product()
    {
        quantity = 0;
        serialNo = 0;
    }
    Product(int totalQuantityOfProduct,int serialNumberOfProduct)
    {
        quantity = totalQuantityOfProduct;
        serialNo = serialNumberOfProduct;
    }

    void setQuantity(int quan)
    {
        quantity = quan;
    }
    void setSerial(int serial)
    {
        serialNo = serial;
    }
    int getQuantity()
    {
        return quantity;
    }
    int getSerial()
    {
        return serialNo;
    }

    Product operator =(Product &obj)
    {
        quantity += obj.quantity;
        return *this;
    }
    Product operator -= (Product &obj)
    {
        quantity -= obj.quantity;
        return *this;
    }    
    Product operator -= (int num)
    {
        quantity -= num;
        return *this;
    }

};

int Product::objCount = 0;

int main()
{
    Product prd1(10,15),prd2,prd3,prd4;
    prd2.setQuantity(20);
    prd2.setSerial(101);

    cout<<"Product 1:"<<endl;
    cout<<"Quantity: "<<prd1.getQuantity()<<endl;
    cout<<"Serial no: "<<prd1.getSerial()<<endl<<endl;

    cout<<"Product 2:"<<endl;
    cout<<"Quantity: "<<prd2.getQuantity()<<endl;
    cout<<"Serial no: "<<prd2.getSerial()<<endl<<endl;

    prd2 = prd1;

    cout<<"Product 2 after adding values of Product 1:"<<endl;
    cout<<"Quantity: "<<prd2.getQuantity()<<endl;
    cout<<"Serial No: "<<prd2.getSerial()<<endl<<endl;

    prd2 -= prd1;

    cout<<"Product 2 after subtracting values of Product 1:"<<endl;
    cout<<"Quantity: "<<prd2.getQuantity()<<endl;
    cout<<"Serial No: "<<prd2.getSerial()<<endl<<endl;    

    prd2 -= 4;

    cout<<"PRroduct 2 after subtracting 4 from the quantity:"<<endl;
    cout<<"Quantity: "<<prd2.getQuantity()<<endl;
    cout<<"Serial No: "<<prd2.getSerial()<<endl<<endl;

    return 0;
}

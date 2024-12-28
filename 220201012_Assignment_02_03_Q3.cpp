#include <iostream>
using namespace std;

class Marks
{
    protected:
    int rollNo;
    string name;
    float marks;

    public:
    Marks()
    {
        rollNo = RollGenerate();
        name = "NULL";
        marks = 0;
    }
    private:
    int RollGenerate()
    {
        static int temp0 = 0;
        return ++temp0;
    }

};

class Physics:public Marks
{
    public:
    Physics()
    {}
    Physics(string Name,float mark)
    {
        name = Name;
        marks = mark;
    }
    void setName(string Name)
    {
        name = Name;
    }        
    void setMarks(float mark)
    {
        marks = mark;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return rollNo;
    }
    float getMarks()
    {
        return marks;
    }
};

class Mathematics:public Marks
{
    public:
    Mathematics()
    {}
    Mathematics(string Name,float mark)
    {
        name = Name;
        marks = mark;
    }
    void setName(string Name)
    {
        name = Name;
    }        
    void setMarks(float mark)
    {
        marks = mark;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return rollNo;
    }
    float getMarks()
    {
        return marks;
    }
};

class Chemistry:public Marks
{
    public:
    Chemistry()
    {}
    Chemistry(string Name,float mark)
    {
        name = Name;
        marks = mark;
    }
    void setName(string Name)
    {
        name = Name;
    }        
    void setMarks(float mark)
    {
        marks = mark;
    }
    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return rollNo;
    }
    float getMarks()
    {
        return marks;
    }
};

int main()
{
    int temp,mathMarks,phyMarks,chemMarks,temp1=0,temp2=0,temp3=0,temp4=0,tempo;
    string name;
    cout<<"How many students are there?"<<endl;
    cin>>temp;

    Physics* phy = new Physics[temp];
    Chemistry* chem = new Chemistry[temp];
    Mathematics* math = new Mathematics[temp];

    for (int i=0;i<temp;i++)
    {
        cout<<"What is the name of "<<i+1<<"th student?"<<endl;
        cin>>name;
        cout<<"What are the marks in physics?"<<endl;
        cin>>phyMarks;
        cout<<"What are the marks in chemistry?"<<endl;
        cin>>chemMarks;
        cout<<"What are the marks in Maths?"<<endl;
        cin>>mathMarks;
        phy[i] = Physics(name,phyMarks);
        chem[i] = Chemistry(name,chemMarks);
        math[i] = Mathematics(name,mathMarks);
    }

    cout<<endl;
    cout<<"The total marks of students are: "<<endl;
    for (int i=0;i<temp;i++)
    {
        temp1 += phy[i].getMarks();
        temp2 += chem[i].getMarks();
        temp3 += math[i].getMarks();
        tempo = phy[i].getMarks() + chem[i].getMarks() + math[i].getMarks();
        cout<<phy[i].getName()<<": "<<tempo<<endl;
    }
 

    cout<<endl;
    cout<<"The average in each subject is: "<<endl;
    cout<<"Physics: "<<temp1/temp<<endl;
    cout<<"Chemistry: "<<temp2/temp<<endl;
    cout<<"Mathematics: "<<temp3/temp<<endl;

    return 0;
}
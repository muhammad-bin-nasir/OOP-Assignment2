#include <iostream>
#include <string>
using namespace std;

class Mammal
{
    string MammalName;

    public:
    Mammal()
    {
        MammalName = "Null";
    }
    string getMammalName()
    {
        return MammalName;
    }
    void setMammalName(string Name)
    {
        MammalName = Name;
    }
    void showMammal()
    {
        cout<<"The name of Mammal is "<<MammalName<<endl;
    }
};

class Bird
{
    string BirdName;

    public:
    Bird()
    {
        BirdName = "Null";
    }
    string getBirName()
    {
        return BirdName;
    }
    void setBirdName(string Name)
    {
        BirdName = Name;
    }
    void showBird()
    {
        cout<<"The name of bird is "<<BirdName<<endl;
    }
};

class Organism:public Bird,public Mammal
{
    string OrganismName;

    public:
    Organism()
    {
        OrganismName = "Null";
    }

    void setOrganismName(string name)
    {
        OrganismName = name;
    }
    void showOrganism()
    {
        cout<<"The name of organism is "<<OrganismName<<endl;
    }
    char* getOrganismName()
    {
        char* name;
        name = &OrganismName[0];
        return name;
    }
};

int main()
{
    Organism org;
    org.setBirdName("Dove");
    org.setMammalName("Tiger");
    org.setOrganismName("Lion");
    org.showBird();
    org.showMammal();
    org.showOrganism();
    cout<<endl<<org.getOrganismName();
    return 0;
}
//
//  main.cpp
//  Learning
//
//  Created by Philip on 09/11/2016.
//  Copyright © 2016 Phil Softley. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    Animal()
        : furColour ("Black"),
        numLegs(0){}
    
    virtual ~Animal(){}
    
    virtual void doANoise()
    {
        cout << "[Very general animal noise]";
    }
    
    void setNumLegs(int x)
    {
        numLegs = x;
    }
    
    int  getNumLegs()
    {
        return numLegs;
    };
    
    void setFurColour(string y)
    {
        furColour = y;
    }
    
    string getFurColour()
    {
        return furColour;
    }
    
private:
    int numLegs;
    string furColour;
    
};

class horse : public Animal
{
public:
    horse()
        : Hoof (3.5){}
    
    ~horse(){}
    
    void doANoise() override
    {
        cout << "neigh, bitches.\n";
    }
    
    void setHoof(double h)
    {
        Hoof = h;
    }
    
    int  getHoof()
    {
        return Hoof;
    }
    
    void describe()
    {
    }
    
private:
    
    double Hoof;
    
};
        
class lion : public Animal
{
public:
    lion(){};
    ~lion(){};
    
    void doANoise() override
    {
        cout << "Meow, yh And wat?!\n";
    }
    
};
        
int main() {

    horse Bobby;
    lion Carl;
    
    Animal *zooCreatures[2];
    zooCreatures[0] = &Bobby;
    zooCreatures[1] = &Carl;
    
    for (int i = 0; i < 2; i++){
        zooCreatures[i]->doANoise();
    }
    
    return 0;
}




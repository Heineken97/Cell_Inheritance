/*
 * @author JosephJimenez
 * @brief Class definition of Cell parts, their specific parts are inherit from a main class
 */
#include <string>
#include <iostream>
using namespace std;

// main cell's Function class
class Function{
protected:
    string name;
public:
    /*
     * @param[n]string Just a name for his function
     */
    Function(string n): name(n){};
    /*
     * @return name
     */
    string getName(){
        return name;
    }
};

//Specific cell's function inherit Function class
//@see Function
class BloodFunction: public Function{
public:
    BloodFunction():Function("BloodFunction"){}
};

class MuscleFunction: public Function{
public:
    MuscleFunction(): Function("MuscleFunction"){}
};

// main cell's Body class
class Body{
protected:
    string shape;
    int life;
public:
    /*
     * @param[n] his type of body
     * @param[end_life] amounts of months to his death
     */
    Body(string n, int end_life): shape(n), life(end_life){}
    /*
     * @return life
     */
    int getLife(){return life;}
    /*
     * return shape his type of cell
     */
    string getShape(){return shape;}

};

//Specific cell's body inherit Body class
class BloodBody: public Body {
public:
    BloodBody() : Body("BloodBody", 360) {}
};

class MuscleBody: public Body{
public:
    MuscleBody(): Body("MuscleBody", 720){}
};

//Cell's Build
class Cell{
protected:
    string name;
    Function *function;
    Body *body;
public:
    Cell(string n): name(n){}
    void setFunction(Function* F){ function= F;}
    void setBody(Body* B){ body= B; }
    void printDetail(){
        cout << " Cell: " << name << endl;
        cout <<  " Function: "<< function-> getName() <<  endl;
        cout <<  " Body: " << body-> getShape() << " Will live[days]: " << body-> getLife() << endl;
    }
};

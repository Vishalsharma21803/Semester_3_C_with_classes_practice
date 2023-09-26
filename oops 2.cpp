#include <iostream>
using namespace std;
class employee{
    public:
    int empid;
    string name;
    int salary;

    // Parametric constructor
    employee(int a,string s,int b){
        empid=a;
        name=s;
        salary=b;
        cout<<"parametric constructor"<<endl;
    }
    // Default constructor
    employee(){
        cout<<"default constructor"<<endl;
    }

    // Copy constructor
    employee (employee &e1){
        empid=e1.empid;
        name=e1.name;
        salary = e1.salary;
    }

    //  Destructor
    ~employee(){
        cout<<"Destructor called"<<endl;
    }

    // Operator Overloading
    bool operator == (employee &e1){
        if(empid==e1.empid && name==e1.name && salary==e1.salary){
            return true;
        }
        else{
            return false;
        }
    }


    void printout(){
        cout<<empid<<endl;
        cout<<name<<endl;
        cout<<salary<<endl;
    }

};
int main(){
    employee e1;
    e1.empid=1221;
    e1.name="Ram";
    e1.salary=45000;
    e1.printout();

    employee e2(1222,"Vishal",500000);
    e2.printout();

    employee e3=e1; 
    e3.printout();

    if(e3==e1){
        cout<<"same"<<endl;

    }
    else{
        cout<<"not same"<<endl;
    }




    return 0;
}
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;

    student (string s,int a){
        name=s;
        age=a;
    }
};
int main(){
    student A("Vishal",20);
    cout<<A.name<<endl;
    cout<<A.age;
    return 0;
}
#include <iostream>
using namespace std;
class Employee {
    public:
    int id;
    float salary ;
    Employee(){}
    Employee(int inpID){
        id=inpID;
        salary=50990;

    }
};
class Programmer : public Employee{
    public :
    int languageSkill;
    Programmer(int intID){
        id = intID ;
        languageSkill=5;
    }
};
int main(){
    Employee tushar(728), Abhishek (717);
    cout<<tushar.id<<endl;
    cout<<Abhishek.id<<endl;
    cout<<tushar.salary<<endl;
    cout<<Abhishek.salary<<endl;
    Programmer Ankit(9);
    cout<<Ankit.languageSkill<<endl;
return 0;
}
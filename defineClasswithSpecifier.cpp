#include <iostream>
using namespace std;
class Car{
    private :
    int color;
    char engine;

    public :
    int wheel;
    char company;

   // void setData(int c , char e){    prototyping function
    void setData(int c,char e);
    
    void getData () {
        cout << color<<endl;
        cout << engine<<endl;
        cout << wheel<<endl;
        cout << company<<endl;
       

    }
};

void Car :: setData(int c, char e){
    void setData(int c,char e);
        color = c;
        engine = e;
}
int main(){
    Car Maruti;
    Maruti.wheel = 4;
    Maruti.company= 'm';
    Maruti.setData(8,'v');
    Maruti.getData();
    return 0;
}
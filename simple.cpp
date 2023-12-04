#include <iostream>
using namespace std;
class Vehicule{
private :
int x,y,z;
public:
Vehicule(int x=0,int y=0,int z=0){
this->x=x;this->y=y;this->z=z;
}
friend ostream& operator<<(ostream &floux,Vehicule const &v);
};

ostream& operator<<(ostream &floux,Vehicule const &v){
floux<<"x = "<<v.x<<"\ny = "<<v.y<<"\nz = "<<v.z;
return floux;
}

int main(){
Vehicule* v=new Vehicule(44,54,10);
cout<<*v;


return 0;
}
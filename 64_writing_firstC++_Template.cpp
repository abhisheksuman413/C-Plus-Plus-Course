#include <iostream>
using namespace std;

template <class T>    // jha  use krna hota hai uske uper likhte hai 
class vector{
   
    public:
     T *arr;        // template ka help se hamlog yha data type bad me set krege
    int size;
    vector(int m){
        size =m;
        arr = new T[size];    // yha v data typr coustem hai 
    }

    T dotproduct( vector &v){     // yha v data typr coustem hai 
        T d =0;        // yha v data typr coustem hai 
        for (int i =0;i<size; i++){
             d+= this->arr[i] *v.arr[i];
             
        }
        return d; 
    }
};

int main()
{
    
vector <float> v1(3);    // yha hamlog datatype set kr rhe hai
v1.arr[0] = 1.55;
v1.arr[1] = 3.55;
v1.arr[2] = 5.65;

vector <float> v2(3);    // yha hamlog datatype set kr rhe hai
v2.arr[0] = 7.75;
v2.arr[1] = 9.85;
v2.arr[2] = 11.78;
    
float a= v1.dotproduct(v2);

cout<<a<<endl;


    return 0;
}
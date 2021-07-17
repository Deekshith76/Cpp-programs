#include <iostream>
#include <cmath> //for sqrt

using namespace std;

int main(void){
    double a, b, c, d, r1, r2, real, img;
    cout << "Enter value of a b and c: ";
    cin >> a >> b >> c;
    
    d = b*b - 4*a*c;
    if(d>0){
        cout << "Roots are real and unequal"<<endl;
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        cout << r1 << "\n" << r2 <<endl;
        
    }else if(d == 0){
        cout << "Roots are real and equal"<<endl;
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        cout << r1 << "\n" << r2 <<endl;
    }else{
        cout <<"Roots are imaginary"<<endl;
        real = -b/(2*a);
        img = sqrt(-d)/(2*a);
        cout << real << " + i" << img << "\n" << real << " - i" << img <<endl;
    }
}   

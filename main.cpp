    #include "../include/fixed_point.hpp"
    #include <iostream>
    using namespace std;

    int main(){

        std::cout<<"Fixed-Point Project Initialized Successfully!"<<std::endl;

        FixedPoint a(5);
        FixedPoint b(2);
        FixedPoint c = a * b;
        cout<< "Result = "<<c.getFixedValue()<<endl;
        cout<<"Integer Value = "<<c.toDouble()<<endl;
        
        return 0;
    }

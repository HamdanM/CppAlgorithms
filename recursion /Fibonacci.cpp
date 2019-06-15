//
//  Fibonacci.cpp
//  CppClass
//
//  Created by Mohammad Hamdan on 12/28/17.
//  Copyright © 2017 Mohammad Hamdan. All rights reserved.
//

#include <iostream>

int fibonacci(int a, int b, int n);

int main(int argc, const char * argv[]){
//    hard coded values
//    std::cout<<fibonacci(2,3,5)<<std::endl;

    int fibnum1;
    int fibnum2;
    int nth;
    std::string answer;
    bool repeat = true;
    while(repeat){
        std::cout<<"Enter your first value for Fibonacci: ";
        std::cin>>fibnum1;
        std::cout<<"Enter your second value for Fibonacci: ";
        std::cin>>fibnum2;
        std::cout<<"Enter your nth value for Fibonacci: ";
        std::cin>>nth;
        std::cout<<fibonacci(fibnum1, fibnum2, nth)<<std::endl;
        
        std::cout<<"Would you like to try new values? yes or no ";
        std::cin>>answer;
        
       
        if (answer == "yes"|| answer == "y"){
            repeat = true;
        }else{
            repeat = false;
        }
        
        
    }
    return 0;
}

int fibonacci(int a, int b, int n){
    
    if (n==1){
        return a;
    }else if (n==2){
        return b;
    }else{
        return fibonacci(a, b, n-1)+fibonacci(a, b, n-2);
    }
}

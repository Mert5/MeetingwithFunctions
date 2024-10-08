#include <iostream>

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o

// Function that takes a single parameter,
// doesn't give back the result explicitly.

// Before you use the function, it must be declared somewhere. This is a requirement in C++.

void enter_age(unsigned int age){   // age can not be negative  // Function parameter 'age'
    if(age>18){
        std::cout << "You're " << age << ". Go on" << std::endl;
    }else{
        std::cout << "Hoop! You can not paaass!" << std::endl;
    }
    return ; // up to you. You can put if you want or not
 }


 // Function that takes multiple parameters as input and returns the result of computation
 int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
 }


// Function takes one thing as parameter and writes a string
void hello(char word[20]){
    std::cout << word << std::endl;
    return ;  // up to you. You can use it or omit it.
 }

int lucky_number(){
    return 99;
}


// Changes to them are not visible outside the function. What we
// have inside the function are actually COPIES of the arguments
// passed to the function.
double increment_multiply( double a, double b){

    std::cout << "Inside the function : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    double results = ((++a) * (++b));

    std::cout << "Inside function , after increment : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    return results;

}


int main(){

    // enter_age function call
    /*
    //enter_age(19);  // Function argument '19'. Where you call, it is argument. Where you define, it is parameter.
    unsigned int counter {0};
    for(unsigned int i{1}; i<20 ; i++){
        enter_age(i);
        counter++;
    }   
    std::cout << "Counter : " << counter << std::endl;
    */


    // max function call
    /*
    int result = max(4,5);

    std::cout << "Maximum is : " << result << std::endl;

    int first, second;
    std::cout << "Input two numbers to see the maximum :" << std::endl;
    std::cin >> first >> second;

    std::cout << "The maximum is : " << max(first,second) << std::endl;
    
    int num1{65}, num2{76};
    int cond = max(num1,num2);
    std::cout << "The maximum is : " << cond << std::endl;
    */


    /*
    // Calling hello
    char wd[100] {"Hello World. It is ok"};
    hello(wd);
    */

    /*
    std::cout << "Your lucky number is : " << lucky_number() << std::endl;
    
    int number{};
    number = lucky_number();
    std::cout << "Number is : " << number << std::endl;
    */
    

    double m{3.00};
    double n{4.00};

    std::cout << "Outside the function, before increment : " << std::endl;
    std::cout << "m : " << m << std::endl;
    std::cout << "n : " << n << std::endl;

    double incr_mult_result = increment_multiply(m,n);
    
    std::cout << "Outside the function, after increment : " << std::endl;
    std::cout << "m : " << m << std::endl;
    std::cout << "n : " << n << std::endl;

    

    return 0;
}

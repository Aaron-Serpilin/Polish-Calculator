#include <iostream>
//#include <iomanip>
//#include <cmath>

//using namespace std;

int main () {

  char firstValue;
  double secondValue;
  double thirdValue;
  double result;
   
   while (firstValue != 'q') {
    
        std::cout << "Enter the expression: " << std::endl;
        std::cin >> firstValue >> secondValue >> thirdValue;  
        
        switch (firstValue) {
            case '+' :
                result = secondValue + thirdValue;
                break;
            case '-' :
                result = secondValue - thirdValue;
                break;
            case '*' :
                result = secondValue * thirdValue;
                break;
            case '/' :
                result = secondValue / thirdValue;
                break;
            default :
                break;
        };

        if (firstValue == 'q') {
            break;
        };

        std::cout << secondValue << " " << firstValue << " " << thirdValue << " = " << result << std::endl;
        //cout << fixed << setprecision(2) << result << endl; //In case I always wanted 2 decimals

    };

   return 0;

};
#include <iostream>

int main(){
    std::cout << "Enter a months number: " << std::endl;
    int x;
    std::cin >> x;
    if (x < 0 || x == 0){
        std::cout << "The number cant be zero or less" << std::endl;
    }
    else if(x > 12){
        std::cout << "The are only twelwe months, number cant be bigger than 12!" << std::endl;
    }
    else if(x == 1){
        std::cout << "1st month is January" << std::endl;
    }
    else if(x==2){
        std::cout << "2nd month is February" << std::endl;
    }
    else if(x==3){
        std::cout << "3rd month is March" << std::endl;
    }
    else if(x==4){
        std::cout << "4th month is April" << std::endl;
    }
    else if(x==5){
        std::cout << "5th month is May" << std::endl;
    }
    else if(x==6){
        std::cout << "6th month is June" << std::endl;
    }
    else if(x==7){
        std::cout << "7th month is July" << std::endl;
    }
    else if(x==8){
        std::cout << "8th month is August" << std::endl;
    }
    else if(x==9){
        std::cout << "9th month is September" << std::endl;
    }
    else if(x==10){
        std::cout << "10th month is October" << std::endl;
    }
    else if(x==11){
        std::cout << "11th month is November" << std::endl;
    }
    else if(x==12){
        std::cout << "12th month is December" << std::endl;
    }
    return 0;
}
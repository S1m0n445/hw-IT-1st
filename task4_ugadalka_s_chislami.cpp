#include <iostream>
#include <random>

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);

    int n = dist(gen);
        std::cout << "Vvedi chislo:" << std::endl;
        int ng;
    
    while(true){
        std::cin >> ng;

        if(ng>n){
            std::cout << "Beri menshe\n";
            continue;
        }
        else if(ng<n){
            std::cout << "Beri bolshe\n";
            continue;
        }
        else if(ng==n){
            std::cout << "Molodec, ugadal!\n";
            break;
        }
    }
    return 0;
}
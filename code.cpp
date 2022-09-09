#include<iostream>
int main(){

    int l,b;
    char symbol;
    std::cout << "How many rows?  \n " << ": ";
    std::cin>>b;
    std::cout << "How many columns? \n" << ": ";
    std::cin>>l;
    std::cout << "Which symbol to use? \n" << ": ";
    std::cin>>symbol;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
            //std::cout << j << ' ';
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}

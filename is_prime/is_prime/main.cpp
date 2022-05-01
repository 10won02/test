//
//  main.cpp
//  is_prime
//
//  Created by 김자영 on 2022/05/01.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int max;
    std::cout << "display primes up to what value? ";
    std::cin >> max;
    int value=2;
    while (value <= max){
        bool is_prime=true;
        int trial = 2;
        while (trial < value){
            if (value % trial == 0){
                is_prime = false;
                break;
            }
            trial++;
        }
        if (is_prime) std::cout << value << ' ';
        value++;
    }
}

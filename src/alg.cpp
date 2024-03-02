// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <iostream>


bool checkPrime(uint64_t value) {
    for (int i = 2; i < value; i++) {
        if (value % i == 0)
            return false;
    }
        return true;
}

uint64_t nPrime(uint64_t n) {
    int size = 0;
    int prost_arr[100] = { 0 };
    for (int number = 2; size < 100; number++) {
        if (checkPrime(number)) 
            prost_arr[size] = number;
        size++;
    }

    return prost_arr[n];
}

uint64_t nextPrime(uint64_t value) {  //18 - 19   5 - 7 
    
     value++;
     while (checkPrime(value) == false) {
         value++;
     }
     return value;
    // вставьте код функции
};

//Функция находит сумму простых чисел до hbound (сама граница в сумму не включается)

uint64_t sumPrime(uint64_t hbound) {  // 11 1 2 3 5 7 
    int sum = 0;
    for (int number = 2; number < hbound; number++) {
        if (checkPrime(number))
            sum += number;
    }
    return sum;
}

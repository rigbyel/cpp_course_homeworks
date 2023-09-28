# include <iostream>
#include <time.h> 

using namespace std;

bool isEven(signed long int num){
    if (num % 2 == 0){
        return true;
    }
    return false;
}

bool isEvenBits(signed long int num){
    if (num & 0b1){
        return false;
    }
    return true;
}
bool isEvenBitsSdvig(signed long int num){
    signed long int new_num = num >> 1;
    if (num ==  new_num << 1){
        return true;
    }
    return false;
}

double benchmark(bool foo(signed long int)){
    clock_t start, end;
    int n = 1000000;
    start = clock();
    for (int i = 0; i < n; i++){
        foo(i);
    }
    end = clock();

    return ((double)(end - start))/(n * CLOCKS_PER_SEC);
}

double benchmark_rand(bool foo(signed long int)){
    clock_t start, end;
    int n = 1000000;
    int *nums = new int[n];
    double avg_time = 0;
    for (int i = 0; i < n; i++)
        nums[i] = rand() % (2 * n) - n ;
    start = clock();
    for (int i = 0; i < n; i++){
        foo(nums[i]);
    }
    end = clock();
    
    return ((double)(end - start))/(n * CLOCKS_PER_SEC);
}

int main(){
    signed long int num;
    
    double t_ordinary = benchmark_rand(isEven);
    double t_bits = benchmark_rand(isEvenBits);

    cout << "Обычный способ: " << t_ordinary << endl;
    cout << "Побитовый способ: " << t_bits << endl;

    return 0;
}

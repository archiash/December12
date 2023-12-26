#include<iostream>
#include <ctime> 
using namespace std;


long long int fibonacci(int n);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(int n){
    if(n < 2) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
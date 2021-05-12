#include <iostream> 
using namespace std; 
long findTrailingZeros(long n) 
{ 
    long count = 0;  
    for (long i = 5; n / i >= 1; i *= 5) 
        count += n / i;
    return count; 
}
main() 
{ 
    long n; 
    cin>>n;
    cout << findTrailingZeros(n); 
}
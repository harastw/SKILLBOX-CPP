#include <iostream>
int n, k;
 
int f(int n, int i)
{
    if (n == 0) return 1;
    else if (n < 0 || i < 1) return 0;
    return f(n-i, k) + f(n, i-1);
}
 
int main() 
{
    std::cin >> n >> k;
    std::cout << f(n, k);
}
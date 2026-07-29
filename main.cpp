#include<bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main()
{
 cout<<"Hello World!"<<endl;
 int num = 5;
    int result = factorial(num);
    cout << "Hello World! Factorial of " << num << " is " << result << endl;
    return 0;
 
}



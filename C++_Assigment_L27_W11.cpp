#include <iostream>
using namespace std;
void printIncreasingDecreasing(int n, int current = 1) {
    // Base case: when current exceeds n, return
    if (current > n) {
        return;
    }
    // Print the current number in increasing order
    cout << current << " ";
    // Recursive call to print the next number
    printIncreasingDecreasing(n, current + 1);
    // Print the current number in decreasing order after returning from recursion
    if (current != n) {
        cout << current << " ";
    }
}
int main() {
    int n;
    cin>>n;
    printIncreasingDecreasing(n);
    return 0;
}

//                                      2 Solution

#include <iostream>
using namespace std;
int sumOdd(int a, int b){
    if(a > b) return 0;
    if(a % 2 != 0) return a + sumOdd(a+2, b);
    return sumOdd(a+2, b);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << sumOdd(a, b);
    return 0;
}


//                                       3 Solution

#include<iostream>
using namespace std;
bool isPowerOf(int n){
    if(n == 1) return true;
    if(n%2 == 0) return isPowerOf(n/2);
    return isPowerOf(n*3+1);
}
int main(){
    int n;
    cin >> n;
    cout << isPowerOf(n);
    return 0;
}

//                                      4 Solution

#include<iostream>
using namespace std;
int climbStairs(int n, int step){
    if(n == 0) return 1;
    if(n < 0) return 0;
    return climbStairs(n-step, step) + climbStairs(n-step*2, step*2);
}
int main(){
    int n;
    cin >> n;
    cout << climbStairs(n, 1);
    return 0;
}

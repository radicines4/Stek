#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack <int> b;
    while(n>0) {
        b.push(n%2);
        n/=2;
    }
    while(!b.empty()){
        cout << b.top();
        b.pop();
    }
    return 0;
}

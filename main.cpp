#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <char> heksa;
    int x;
    cin >> x;
    while(x>0){
        int ostatak = x%16;
        if (ostatak<10) heksa.push(ostatak + '0');
        else heksa.push(ostatak -10 + 'A');
        x/=16;
    }
    while(!heksa.empty()){
        cout << heksa.top();
        heksa.pop();
    }
    return 0;
}

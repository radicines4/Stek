#include <iostream>
#include <stack>
using namespace std;
//invertovanje steka
int main()
{
    int n, x;
    cin >> n;
    stack <int> s;
    stack <int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        s.push(x);
    }
    if(!s.empty())
    {
        while (!s.empty()){
            m.push(s.top());
            s.pop();
        }
        while(!m.empty()){
            cout << m.top() << " ";
            m.pop();
        }
    } else cout << "Stek je prazan";
    return 0;
}

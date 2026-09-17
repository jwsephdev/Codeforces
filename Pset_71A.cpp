#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
 
    int x;
    cin >> x;
 
    for (int i = 0; i < x; i++)
    {
        string str;
        cin >> str;
 
        if (str.length() - 1 >= 10)
        {
           cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
       else 
        {
            cout << str << endl;
       }
    }
    return 0;
}
 
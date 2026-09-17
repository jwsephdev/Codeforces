#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    int totalProblems = 0;
    for (int a = 0; a <= x; a++)
    {
        string i;
        getline(cin, i);

        int e = 0;
        
        for (int j = 0; j < i.length(); j++)
        {
            if (i[j] == '1')
            {
                e++;
            }
        }
        
        if (e >= 2)
        {
            totalProblems++;
        }

        e = 0;
    }

    cout << totalProblems << endl;
    return 0;
}
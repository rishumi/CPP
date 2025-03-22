/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print1() {
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++) {
        cout << "* ";
    }
    cout << endl;
}
}

int main()
{
    print1();
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<< "* ";
        }
        cout<<endl;
    }
}
 int main()
 {
    int n = 5;
    pattern1(n);
    return 0;
 }
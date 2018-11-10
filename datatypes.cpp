#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
   int x;
double y;
string z;
x = 0;
y = 0.0;
z=" ";
cin>>x;
cin>y;
getline(cin>>ws,z);
        cout<<x+i<<endl;
    cout<<fixed<<setprecision(1)<<y+d<<endl;
    cout<<s+z;
    return 0;
}

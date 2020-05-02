#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
int q = 0;
double b = 0.0;

string y;
string r;
for (int i = 0; i < 4 ; i++) {
    switch (i) {
            case 1:
                cin >> q ;
               break;
            case 2:
                cin >> b;
               break;
            case 3:
                cin.ignore(1234, '\n');getline(cin, y);
               break;
               
        }
    }
   
 
    double c = d + b;
    int w = i + q;
    r = s + y ;
  
    printf("%d \n",w);
    printf("%0.1f \n",c);
    cout <<  r <<  endl;
       
    
    return 0;
}

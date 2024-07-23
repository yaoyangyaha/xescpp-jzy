#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(int(time(0)));
    cout << rand()%6;
    return 0;
}

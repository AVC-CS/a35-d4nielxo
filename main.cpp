#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rdnum1, rdnum2, rdnum3;
    int total = 0;

    srand(static_cast<unsigned int>(time(0)));

    rdnum1 = rand() % 100;
    rdnum2 = rand() % 100;
    rdnum3 = rand() % 100;
    total = rdnum1 + rdnum2 + rdnum3;

    cout << rdnum1 << " " << rdnum2 << " " << rdnum3 << endl;

    cout << total << " " << (total / 3) << endl;

    return 0;
}
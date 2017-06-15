#include <iostream>
#define x 6
#define y 3
using namespace std;

int main()
{

int list_1 [x]= {13,16,11,15,12,14};

int list_2 [y] = {1,2,3};

for (int counter_1=0; counter_1 < x; ++counter_1)
   {
	//int counter_2 = 0;
    for (int counter_2 =0; counter_2 < y; ++counter_2)
    
       {

         if (list_1 [counter_1] == list_2 [counter_2])

            break;

         if (list_1 [counter_1] != list_2 [counter_2] && counter_2 == y-1)

            cout << list_1 [counter_1];
        }
    }
    return 0;
}

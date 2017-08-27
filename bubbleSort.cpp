
#include <iostream>
using namespace std;

void bubbleSort(double array[], int size)
{
    
    double temp;
    bool swap;
    do
    {
        swap = false;
        for (int i = 0; i < (size - 1); i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}



int main()
{
    double listOfDoubles[] = {8.34,2,2.324,9,1,23,23423,1,3.532,1.023,0.34321,9,1234,4};
    
    for (int i = 0; i < 14; i++)
    {
        cout << listOfDoubles[i] << endl;
    }
    
    cout << "bubble sort" << endl << endl;
    
    bubbleSort(listOfDoubles, 14);
    
    for (int i = 0; i < 14; i++)
    {
        cout << listOfDoubles[i] << endl;
    }
    
    return 0;
}


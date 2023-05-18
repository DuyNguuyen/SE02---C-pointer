#include <iostream>
#include "function.h"

using namespace std;
#include "find_text_in_text.h"
#include "get_text_length.h" 

int main()
{
    int count;
    cout << "Number of element: ";
    cin >> count;
    int* a = new int[count];
    for(int i = 0; i < count; i++){
        cout << "\nElement " << i + 1 << ": ";
        cin >> *(a + i);
    }

    int sum = 0;
    for( int i = 0; i < count; i++){
        sum += *(a + i);
    }    
    
    cout << "\nSum of array: " << sum;
    
    for(int i = 0; i < count - 1; i++){
        for(int j = i + 1; j < count; j++){
            if(*(a + i) > *(a + j)){
                swap(a + i, a + j);
            }
        }
    }
    
    cout << "\nSort array by decreasing value: ";
    for( int i = 0; i < count; i++){
        cout << *(a + i) << " ";
    }    
    
    for(int i = 0; i < count/2; i++){
        swap(a + i, a + count - i - 1);
    }
    
    cout << "\nSort array by increasing value: ";
    for( int i = 0; i < count; i++){
        cout << *(a + i) << " ";
    }  
    
    delete [] a;
    a = NULL;
    
    return 0;
}
#include <stdio.h>
#include <iostream>

using namespace std;

void printData(int array[ ])
{
cout << array[0] <<"\n" ; // #2
cout << array[1] <<"\n" ; // #3
}

int main()
{
    
    
int nums[3] = {10,20,30};
int *ptr = nums;
cout << nums[2] << endl;
cout << *(nums + 1) << endl;
cout << *(ptr + 2) << endl;
cout << ptr[2] << endl <<endl;
    
    
printData(nums); // #1
printData(&nums[1]);
printData(nums+1);
}

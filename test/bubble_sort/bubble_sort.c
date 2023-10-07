#include "string.h"
#define DEBUG_IF_ADDR (int *)(0x00002010)

/*
void bubble_sort(int* arr, int len)
{
    int sort_num;
    do
    {
        sort_num = 0;
        for(int i=0;i<len-1;i++)    
        {
            if(*(arr+i) > *(arr+i+1))
            {
                int tmp = *(arr+i);
                *(arr+i) = *(arr+i+1);
                *(arr+i+1) = tmp;
                sort_num++;
            }
        } 
    }
    while(sort_num!=0); 
}

*/


void custom_func(int* arr1, const int* arr2){
	asm volatile(
		".insn r 0x33, 0x07, 0x20, %[res], %[r1], %[r2] \n"
		:[res]"=r"(*arr1)
		:[r1]"r"(*arr1), [r2]"r"(*arr2)
	);
	return ;
}

void addArrays(int arr1[], const int arr2[], int size) {
    for (int i = 0; i < size; i++) {
       //arr1[i] &= arr2[i];
       custom_func(&arr1[i], &arr2[i]);
    }
}


int main() 
{
    int arr1[] = {20, 15};
    int arr2[] = {20, 10};
    const int sorted_arr[] = {40, 5};
    addArrays(arr1, arr2, 2);

    int *addr_ptr = DEBUG_IF_ADDR;
    if(memcmp((char*) sorted_arr, (char*) arr1, 8) == 0)
    {
        //success
        *addr_ptr = *(arr1+1);
    }
    else
    { 
        //failure
        *addr_ptr = *(arr1+1);
    }
    return 0;
}

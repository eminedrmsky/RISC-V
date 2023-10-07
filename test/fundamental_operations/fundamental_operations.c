#include "string.h"
#define DEBUG_IF_ADDR (int *)(0x00002010)

//Takes two arrays and adds them, writes new values on first array
void add(int* first_arr, int* second_arr, int len)
{
    int sort_num;
    do
    {
        sort_num = 0;
        for(int i=0;i<len-1;i++)
        {
            int tmp = *(first_arr +i) + *(second_arr +i);
            *(first_arr +i) = tmp;
            sort_num++;
        } 
    }
    while(sort_num!=0);
}

//Takes two arrays and multiplies them, writes new values on first array
void multiply(int* first_arr, int* second_arr, int len)
{
    int sort_num;
    do
    {
        sort_num = 0;
        for(int i=0;i<len-1;i++)
        {
            int tmp = *(first_arr +i) * *(second_arr +i);
            *(first_arr +i) = tmp;
            sort_num++;
        } 
    }
    while(sort_num!=0);
}

//Takes two arrays and substracts them, writes new values on first array
void substract(int* first_arr, int* second_arr, int len)
{
    int sort_num;
    do
    {
        sort_num = 0;
        for(int i=0;i<len-1;i++)
        {
            int tmp = *(first_arr +i) - *(second_arr +i);
            *(first_arr +i) = tmp;
            sort_num++;
        } 
    }
    while(sort_num!=0);
}

//Takes two arrays and divides them, writes new values on first array
void divide(int* first_arr, int* second_arr, int len)
{
    int sort_num;
    do
    {
        sort_num = 0;
        for(int i=0;i<len-1;i++)
        {
            int tmp = *(first_arr +i) / *(second_arr +i);
            *(first_arr +i) = tmp;
            sort_num++;
        } 
    }
    while(sort_num!=0);
}

int main() 
{
    int first_arr[] = {50};
    int second_arr[] = {195};
    int result_arr[] = {245};
    add(first_arr, second_arr, 1);
    
    int *addr_ptr = DEBUG_IF_ADDR;
    if(memcmp((char*) result_arr, (char*) first_arr, 4) == 0)
    {
        //success
        *addr_ptr = 1;
    }
    else
    {
        //failure
        *addr_ptr = 0;
    }
    return 0;
}

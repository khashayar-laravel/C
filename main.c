#include <stdio.h>

int main()
{
    int prime_array[50]; 
    int index = 0;
    
    for(int numbers = 0; numbers<=100; ++numbers)
    {
        if(numbers==1)
        {
            continue;
        }
        
        if(numbers==2 || numbers==3 || numbers==5 || numbers==7 
        || numbers==11)
        {
            prime_array[index]=numbers;
            printf("%d\n",numbers);
            ++index;
        }
        
        if(numbers % 2 !=0 && numbers % 3 !=0 && numbers % 5 !=0 
        && numbers % 7 !=0 && numbers % 11 !=0)
        {
            prime_array[index]=numbers;
            printf("%d\n",numbers);
            ++index;
        }
    }
   
}

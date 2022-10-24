//
//  main.c
//  P20
//
//  Created by William Ng on 2022/10/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    
    for (i=1;i<=20;i++)
    {
        printf("%10d",1+(rand()%6));
        if(i%5==0)
        {
            printf("\n");
        }
    }
    
    system("pause");
    return 0;
}

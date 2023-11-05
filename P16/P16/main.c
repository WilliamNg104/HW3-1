//
//  main.c
//  P16
//
//  Created by William Ng on 2023/11/4.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x;
    
    for(x=1;x<=10;x++)
    {
        printf("%.2f ",sqrt(x));
    }
    printf("\n");
    system("pause");
    return 0;
}

//
//  main.c
//  P18
//
//  Created by William Ng on 2023/11/4.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char string1[60]="Welcome";
    char string2[60];
    
    int len;
    
    strcpy(string2,string1);
    printf("string2=%s\n",string2);
    
    len=strlen(string2);
    printf("字串長度為%d\n",len);
    
    system("pause");
    return 0;
}

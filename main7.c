//
//  main7.c
//  Problem 7
//
//  Created by Ksenia on 14.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 200
#define N 26 //letters of English alfabet

int main() {
    int i,j, max;
    char buf[SIZE];
    int count[N]={0};
    
    printf("Input string (use only capital letters):   \n");
    scanf("%s",buf);
    /*
    srand((unsigned int)time(0));
    for(i=0; i<SIZE-1;i++)
        buf[i]=rand() % ('Z'-'A'+1)+'A';
    buf[SIZE-1]='\0';
     */
    
    //puts (buf);
    
    i=0;
    while(buf[i] != '\0')
    {
        count[buf[i] - 'A']++;
        i++;
    }
    
    for(i=0; i<N; i++)
    {
        if (count[i]>max)
            max=count[i];
        if(count[i]>0)
            printf("%c-%d\n", i+'A', count[i]);
    }
 //   printf("Max frequence: %d\n", max);
    
    
    for(i=0;i<N;i++)
    {
        if(count[i]==max)
            printf("%c-%d\n",i+'A', count[i]);
        
    }
    return 0;
}
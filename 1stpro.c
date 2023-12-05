#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()


{
    
    int no,nogase=1,gase;
    srand(time(0));
    no=rand()%100+1;
    // printf("%d",no);
    printf("Hay my name is kunal\tlets play a game i am selcting one number from 1-100 \nand you try to gase it\t i am counting your gase, Gase a number:\n ");
     scanf("%d",&gase);
    do{
        if(gase==no)
        
       {
         printf("YOUR GASE IS WRITE IT IS %d you do it in %d gases only ",no,nogase);
         break;
         }
       

    else if(gase>no)
    {
        printf("try smallear number:\n");
        scanf("%d",&gase);
    }
       
    else
    {
        printf("try a big number\n:");
        scanf("%d",&gase);
     }   
    nogase++;
    }
    while(nogase!=no);
    
return 0;
}
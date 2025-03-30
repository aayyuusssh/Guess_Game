#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   
    int rnumb;
    srand(time(0));
    rnumb = rand()%100 + 1 ;
    // printf("%d\n",rnumb);  //random number choose
    
    char name[50];
    printf("Enter Your name: ");
    scanf("%s",&name);
    // printf("%s",name);

    printf("NUMBER GUESS GAME me %s AAPKA SWAGAT Ha!! LET'S SEE HOW MUCH YOUR LUCK FAVOURS YOUUUU\n",name);

    int numb , count = 1 ;
    printf("%s 1 SE 100 KA BEECH ME NUMBER DAL\n",name);
    while(numb != rnumb){
        scanf("%d",&numb);

        if(numb < rnumb ){
            printf("%s THODA BADA NUMBER CHOOSE KARO!!\n",name);
            count++;
        }
        else if(numb > rnumb){
            printf("%s THODA CHOTA NUMBER CHOOSE KARO!!\n",name);
            count++;
        }
        else{
            printf("Ohhh Great!!, You Guessed it Right in %d attempt... \n",count);
        }
    }
    return 0;
}
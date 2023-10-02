triangle
#include <stdio.h>

int main()
{
   for(int i=1 ; i<5 ; i++){
       for(int j=1 ; j<4 ; j++){
           if(j==1||i==4||i==j){
            printf("* ");
       }else{
           printf(" ");
       }
         } 
         printf("\n");
   }

    return 0;
}



N
#include <stdio.h>

int main()
{
    for(int i=1 ; i<5 ; i++){
        for(int j=1 ; j<5 ; j++){
            if(j==1||j==4||i==j){
                printf("* ");
            }else{
                printf("  ");
            }
        }
         printf("\n");
    }
    

    return 0;
}





A
#include <stdio.h>

int main()
{
    for(int i=1 ; i<8 ; i++){
        for(int j=1 ; j<5 ; j++){
            if(i==4||j==1||j==4||i==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
         printf("\n");
    }
    

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h;
	    
	printf("yükseklik: ");
	scanf("%d",&h); 
        
        int basamak=1;
        int bosluk = h-1;
          
        int i,j;
        for(i=0; i<h;i++)
        {
             for(j=0;j<bosluk;j++)
             {
                printf(" ");
             }
             for(j=0;j<basamak;j++)
             { 
                printf("#");
             }
             basamak +=2;
             bosluk--;
             printf("\n");             
        }  
	basamak -=4;
	bosluk=1;  
   			
   	for(i=0; i<h;i++)
        {
             for(j=0;j<bosluk;j++)
             {
                 printf(" ");
             }
             for(j=0;j<basamak;j++)
             { 
                 printf("#");
             }
             printf("\n");
             bosluk++;
             basamak -=2;               
         }  

   return 0;
}

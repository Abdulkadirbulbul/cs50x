MarioBlankAdvanced.c
#include <cs50.h>
#include <stdio.h>
int get_height_int(string cikti);
int main(void)
{
   int h=get_height_int("Yüksekliği giriniz...\n");
   int ah=h-1;
   int yah=h+1;
   for(int i=1;i<=h;i++){
         int noktasayisi=ah-i;
         int ins=yah+i;
         int satir=2*h+1;
       for(int j=0;j<satir;j++)
       {   
          int bos=ah+1;
          if(j<=noktasayisi||ins<=j)
         {
           printf(" ");
         }
         else if(j==bos)
         {
             printf(" ");
         }
      
         else  if(j>noktasayisi)
         {
             printf("#");
         } 

       }
       printf("\n");
   }
}
int get_height_int(string cikti){
    int n;
    do
    {
    n=get_int("%s",cikti);
    }
    while(8<n || n<1);
      return n;
   
}

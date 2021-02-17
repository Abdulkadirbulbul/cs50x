MarioBlankAdvanced.c
#include <cs50.h>
#include <stdio.h>
int get_height_int(string cikti);
int main(void)
{
   int h=get_height_int("Yüksekliği giriniz...\n");
   for(int i=1;i<=h;i++){
         int noktasayisi=h-i;
       for(int j=0;j<h;j++)a
       {   if(j<noktasayisi)
         {
           printf(" ");
         }
         else
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
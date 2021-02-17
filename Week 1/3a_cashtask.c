3a_cashtask.c
#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_borc_float(string promt);
 int main(void)
{
   float borc=get_borc_float("Borcu giriniz.\n");
   int borccent=round(borc*100);
   int bozuksayisi=0;
   while(borccent!=0)
   {
      if(borccent>=25)
      {
         borccent=borccent-25;
         bozuksayisi++;
      }
      else if(borccent>=10)
      {
           borccent=borccent-10;
         bozuksayisi++;
      }
      else if(borccent>=5)
      {
          borccent=borccent-5;
          bozuksayisi++;
      }
      else if(borccent>=1)
      {
          borccent=borccent-1;
          bozuksayisi++;
      }
   }
   printf("%i",bozuksayisi);
  
}
float get_borc_float(string promt)
{
    float f;
    do 
    {
       f=get_float("%s",promt);
    }
    while(f<0);
    return f;
}
    

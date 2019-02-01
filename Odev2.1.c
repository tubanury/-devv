#include <stdio.h>

int main()
{
     
 int tek[8];
 int cift[8];
 int kartsayisi=0;
 int toplam1=0;
 int toplam2=0; //çöp deger atamamasi icin.
 int toplam3=0;
 int toplam4=0;
 int a=0;
       FILE *dosya=fopen("krediKartVeri.txt","r");
      if(dosya==NULL)
       {
     printf("Dosya bulunamadi.");
     return 0; 
       }
     fscanf(dosya, "%d", &kartsayisi);
 //printf("kart sayisi : %d \n ", kartsayisi);
 
 
 int i;
 for(i=0;i<8;i++){

    fscanf(dosya,"%1d", &tek[i]);
     fscanf(dosya,"%1d", &cift[i]);
      //printf("%1d%1d",tek[i],cift[i]);
                 }
  
    for(i=0;i<8;i++)
    {
    	toplam1=toplam1+cift[i];
	}
  	//printf("%d\n",toplam1); kontrol icin
	
  	
  	for(i=0;i<8;i++)
	  {
  		int x= 2*tek[i];
		  if(x>9)
  		{
  			toplam2=toplam2+(x%10+x/10);
		  }
  		  else
		  toplam2= toplam2 + x;
         }
		 printf("a nolu kredi karti toplam degeri:%d", toplam2+toplam1);
		 
	if((toplam1+toplam2)%10==0)
	{
		FILE*dosya=fopen("krediKartVerix.txt", "w");
		fprintf(dosya,"Gecerli");
	}
  	     
		   else if((toplam1+toplam2)%10!=0)
		   {
		   
  	       FILE*dosya=fopen("krediKartVerix.txt", "w");
  	       fprintf(dosya, "Gecersiz");
  	       
			 }
			 
			 
  	   
				               


 


 
 
 
 
 
 }

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


	int sure=0, zorluk=0, dogru=0, yanlis=0; 
	

    sureyiAyarla(int *sure)
        {
        	int suregiris;
            printf("Oynamak istedigin sureyi sec! (Saniye cinsinden) : ");
            scanf("%d",&suregiris);
            *sure = suregiris;
        }
            void cikis()
        {
        	printf("Cikmak icin bir tusa bas!");
            exit(0);
        }
    void zorlukAyarla(int *zorluk)
        {
        	int y;
			printf("Zorluk seviyesi : \nKolay --> 1\nOrta --> 2\nZor --> 3\n");
			scanf("%d",&y);
			*zorluk = y;
				
        }
        void dogrusay(int *dogru){
        
			*dogru = *dogru + 1;
		
		
        }
        void yanlissay(int *yanlis){
        	
			*yanlis = *yanlis+1;
			
		
        }
            
    soruGoster(int sure,int aktifzorluk, int *dogru, int *yanlis)
        {
        	 
        	 
        	 srand(time(NULL));
        	 
			 int usersonuc; 
			 int sonuc;
			 int sayi1, sayi2;
			 int cikisf;
  			 printf("***Cikis icin '-1'e basman yeterli.***\n");
			
			//Zaman yapýsý tamamen doðru fakat Time fonksiyonu android'te düzgün çalýþamadý.

		/*	float saniye; saniye = time (NULL);
			printf("%d\n",saniye);
			long double a=0;
			a= saniye + sure;
			printf("%d",a);
			while(a!=saniye)
			{ */
			while(usersonuc!=-1)
			{
			
			 switch(aktifzorluk)
			 	{	
			 		case 0:  
						printf("Bi zorluk secmelisin!");
						main();
			 			break;
			 		case 1: 
					 	 sayi1= ((rand() %10)+1);
			 			 sayi2= ((rand() %10)+1);
			 			printf("%d x %d = ",sayi1,sayi2);
			 			sonuc = sayi1* sayi2;
						break;
			 		case 2: 
					 	 sayi1= ((rand() %20)+1);
						 sayi2= ((rand() %20)+1);
						printf("%d x %d = ",sayi1,sayi2);
						sonuc = sayi1* sayi2;
						break;
			 		case 3: 
					 	 sayi1= ((rand() %50)+1);
			 			 sayi2= ((rand() %50)+1);
			 			printf("%d x %d = ",sayi1,sayi2);
			 			sonuc = sayi1* sayi2;
					 	break;
			 		default: printf("0-3 arasý deðer gir!");
			 	}
			 				 
			/* if(aktifzorluk==0){printf("Bi zorluk sec!");}
			 
			if(aktifzorluk==1)
				{
			 		int sayi1= ((rand() %10)+1);
			 		int sayi2= ((rand() %10)+1);
			 		printf("%d x %d = ",sayi1,sayi2);
			 		sonuc = sayi1* sayi2;
				}
			else if(aktifzorluk==2)
				{
					int sayi1= ((rand() %20)+1);
					int sayi2= ((rand() %20)+1);
					printf("%d x %d = ",sayi1,sayi2);
					sonuc = sayi1* sayi2;
				}
			else if(aktifzorluk==3)
				{
			 		int sayi1= ((rand() %50)+1);
			 		int sayi2= ((rand() %50)+1);
			 		printf("%d x %d = ",sayi1,sayi2);
			 		sonuc = sayi1* sayi2;
				}
				*/
				scanf("%d",&usersonuc);
				
				if(sonuc==usersonuc)
					{
						*dogru=*dogru+1;	
						
					//	printf("bildiniz");
						
					}
				else if(sonuc!=usersonuc)
					{
						*yanlis = *yanlis+1;
					//	printf("bilemediniz");
					}
				//	saniye = time (NULL);
			//}
		}
				printf("-----------------Sonucunu gormelisin!----------------");
			main();
			
				
				
			
		
        }
        void sonucGoster(int topdogru, int topyanlis)
		{
			printf("+++++++++++++++++ %d soruda ",(topdogru+topyanlis));
			printf("Toplam dogru sayin : %d",topdogru);
			printf(" Toplam yanlis sayin: %d ++++++++++++++++++",topyanlis);
		
		}
    	void fmenu(int menu)
        {
        
        
      		
        
        	
			if(menu==0) {cikis();}
    		else if(menu==1) {sureyiAyarla(&sure);}
    		else if(menu==2) {zorlukAyarla(&zorluk);}
    		else if(menu==3) {soruGoster(sure,zorluk,&dogru,&yanlis);}
    		else if(menu==4) {sonucGoster(dogru,yanlis);}
    		main();
		}
		
		
    
		int main()
			{
				srand(time(NULL));
				int menu;    
				
    			printf("\n--------------------------------------------------\n");
   				printf("Carpim oyunuma hos geldin!\n");
    			printf("Cikis --> 0\nSureyi ayarla --> 1\nZorluk Ayarla --> 2\nSoru Goster   --> 3\nSonuc goster  --> 4\n");
				scanf("%d",&menu);
    
    			fmenu(menu);
    			
    
			}
			
			
			
			
			
			
/*
    /\      /\
   /  \    /  \
  / /\ \  / /\ \
 / /  \ \/ /  \ \	
/ /  \ \  / /  \ \ 
      \ \/ /
       \  /
        \/   mahmutbedir*/


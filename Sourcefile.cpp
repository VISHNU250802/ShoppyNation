#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<time.h>


int electronics();
int essentials();
int fashion();
int pantry();
int furniture();

void loadingBar()
{
    system("color 0B");
    char a = 177, b = 219;


    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Initializing SHOPPYNATION System...\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
        printf("%c", a);
        Beep(200,200);
        Beep(300,200);
        Beep(500,200);
        Beep(400,200);
        Beep(600,200);
        Beep(800,200);
        Beep(1000,200);
    printf("\r");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
	{
        printf("%c", b);
        Sleep(110);
    }
}
void shutdownBar()
{
    system("color 0B");
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\tSHUTTING DOWN......\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
        printf("%c", a);
        Beep(1000,200);
        Beep(800,200);
        Beep(600,200);
        Beep(400,200);
        Beep(500,200);
        Beep(300,200);
        Beep(200,200);
    printf("\r");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
	{
        printf("%c", b);
        Sleep(110);
    }
}
void payment()
{
    system("color 0B");
    char a = 200, b = 250;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t PROCESSING PAYMENT....\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
        printf("%c", a);
    printf("\r");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
	{
        printf("%c", b);
        Sleep(350);
    }
}
void shift()
{
    system("color 0B");
    char a = 150, b = 200;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t HOLD ON!!! SHIFTING TO NEXT SECTION....\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
        printf("%c", a);
    printf("\r");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
	{
        printf("%c", b);
        Sleep(120);
    }
    system("CLS");
}
void generate()
{
    system("color 0B");
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Generating OTP...\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
        printf("%c", a);
    printf("\r");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 26; i++)
	{
        printf("%c", b);
        Sleep(100);
    }
}
int electronics()
{
    int y, x=10;
	int code,TOTAL_AMOUNT1,qty;
	int sum=0;
	printf("\n\t\t\t\t Welcome to Electronics Section\n");

	while (x!=0)
	{
	printf("\nIf you want to Purchase\n Single Item Press:0\n Multiple Items Press:1\n");
	scanf("%d",&y);

	if (y==0)
	{
		printf("Please follow the given codes to make your purchase\n 0 =>Enter 0 for NONE\n 1 => T.V\n 2 => Mobile Phone\n 3 => Washing Machine\n 4 => Laptop\n 5 => Tablets\n 6 => Camera\n 7 => Headphones\n 8 => Smart Watches\n 9 => Computer Peripherals\n 10 => Wifi Systems\n"  );
	      scanf("%d",&code);
             if(code==0)
             {
                 printf("YOU Entered NONE");
                 TOTAL_AMOUNT1=0;
             }
		     else if(code==1)
		     {
		       printf("Cost of each Smart T.V is Rs.39,999\n");
		       printf("Enter Quantity you require: ");
		       scanf("%d",&qty);
		       TOTAL_AMOUNT1=qty*39999;
		       sum=sum+TOTAL_AMOUNT1;
		     }
		     else if(code==2)
		     {
		     	printf("Cost of each Mobile Phone is Rs.24,999\n");
		     	printf("Enter Quantity you require: ");
		        scanf("%d",&qty);
		    	TOTAL_AMOUNT1=qty*24999;
		    	sum=sum+TOTAL_AMOUNT1;
		     }
			 else if(code==3)
			 {
			 	printf("Cost of each Washing Machine is Rs.34,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*34999;
		  	    sum=sum+TOTAL_AMOUNT1;

			 }
		  	 else if(code==4)
		  	 {
		  	 	printf("Cost of each Laptop is Rs.89,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*89999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==5)
			   {
			   	printf("Cost of each Tablet is Rs.54,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*54999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==6)
			   {
			   	printf("Cost of each Camera is Rs.64,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*64999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==7)
			   {
			   	printf("Cost of each HeadPhones is Rs.2,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*2999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==8)
			   {
			   	printf("Cost of each Smart Watches is Rs.49,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*49999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==9)
			   {
			   	printf("Cost of each Computer Peripherals is Rs.14,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*14999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==10)
			   {
			   	printf("Cost of each Wifi Systems is Rs.4,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*4999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
		x=0;
    }
    else
    {
      printf("Please follow the given codes to make your purchase\n 0 =>Enter 0 for NONE\n 1 => T.V\n 2 => Mobile Phone\n 3 => Washing Machine\n 4 => Laptop\n 5 => Tablets\n 6 => Camera\n 7 => Headphones\n 8 => Smart Watches\n 9 => Computer Peripherals\n 10 => Wifi Systems\n"  );
	      scanf("%d",&code);
             if(code==0)
             {
                 printf("YOU Entered NONE");
                 TOTAL_AMOUNT1=0;
             }
		     else if(code==1)
		     {
		       printf("Cost of each Smart T.V is Rs.39,999\n");
		       printf("Enter Quantity you require: ");
		       scanf("%d",&qty);
		       TOTAL_AMOUNT1=qty*39999;
		       sum=sum+TOTAL_AMOUNT1;
		     }
		     else if(code==2)
		     {
		     	printf("Cost of each Mobile Phone is Rs.24,999\n");
		     	printf("Enter Quantity you require: ");
		        scanf("%d",&qty);
		    	TOTAL_AMOUNT1=qty*24999;
		    	sum=sum+TOTAL_AMOUNT1;
		     }
			 else if(code==3)
			 {
			 	printf("Cost of each Washing Machine is Rs.34,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*34999;
		  	    sum=sum+TOTAL_AMOUNT1;

			 }
		  	 else if(code==4)
		  	 {
		  	 	printf("Cost of each Laptop is Rs.89,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*89999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==5)
			   {
			   	printf("Cost of each Tablet is Rs.54,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*54999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==6)
			   {
			   	printf("Cost of each Camera is Rs.64,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*64999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==7)
			   {
			   	printf("Cost of each HeadPhones is Rs.2,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*2999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==8)
			   {
			   	printf("Cost of each Smart Watches is Rs.49,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*49999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==9)
			   {
			   	printf("Cost of each Computer Peripherals is Rs.14,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*14999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
			   else if(code==10)
			   {
			   	printf("Cost of each Wifi Systems is Rs.4,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT1=qty*4999;
		  	    sum=sum+TOTAL_AMOUNT1;

			   }
	}
   }

             return sum;

}
int essentials()
{
    int y, x=10;
	int code,TOTAL_AMOUNT2,qty;
	int sum1=0;
	printf("\n\t\t\t\t Welcome to Essentials Section\n");
	while(x!=0)
    {
        printf("\nIf you want to Purchase\n Single Item Press:0\n Multiple Items Press:1\n");
        scanf("%d",&y);
        if(y==0)
        {
            printf("\nPlease follow the given codes to make your purchase\n 0=> Enter 0 for NONE\n 1 => Oxymeter\n 2 => thermometer\n 3 => N95 Masks\n 4 => Sanitizers\n 5 => Gloves\n 6 => PPE Kits\n 7 => Face sheilds\n 8 => Oxygen Conectrartor\n 9 => Non-contact Forehead Thermometer\n 10 => Hand Wash\n");
	        	scanf("%d",&code);
	        	if(code==0)
                {
                   printf("YOU Entered NONE");
                   TOTAL_AMOUNT2=0;
                }
		       else if(code==1)
			  {
				printf("Cost of each Oxymeter is Rs.1,499\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*1499;
		  	    sum1=sum1+TOTAL_AMOUNT2;
              }
		      else if(code==2)
			  {
				printf("Cost of each Thermometer is Rs.999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*999;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==3)
			  {
				printf("Cost of each N95 is Rs.299\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*299;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==4)
			  {
				printf("Cost of each Sanitizer is Rs.555\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*555;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==5)
			  {
				printf("Cost of each Gloves is Rs.499\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*499;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==6)
			  {
		        printf("Cost of each PPE is Rs.699\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*699;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==7)
			  {
		      	printf("Cost of each Face Shields is Rs.359\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*359;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==8)
			  {
				printf("Cost of each Oxygen Concentrator is Rs.20000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*20000;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==9)
			  {
				printf("Cost of each Non-contact Forehead Thermometer is Rs.1599\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*1599;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==10)
			  {
		       	printf("Cost of each Hand Wash is Rs.159\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*159;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
			  x=0;
        }
        else
        {
            printf("\nPlease follow the given codes to make your purchase\n 0=> Enter 0 for NONE\n 1 => Oxymeter\n 2 => thermometer\n 3 => N95 Masks\n 4 => Sanitizers\n 5 => Gloves\n 6 => PPE Kits\n 7 => Face sheilds\n 8 => Oxygen Conectrartor\n 9 => Non-contact Forehead Thermometer\n 10 => Hand Wash\n");
	        	scanf("%d",&code);
	        	if(code==0)
                {
                   printf("YOU Entered NONE");
                   TOTAL_AMOUNT2=0;
                }
		       else if(code==1)
			  {
				printf("Cost of each Oxymeter is Rs.1,499\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*1499;
		  	    sum1=sum1+TOTAL_AMOUNT2;
              }
		      else if(code==2)
			  {
				printf("Cost of each Thermometer is Rs.999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*999;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==3)
			  {
				printf("Cost of each N95 is Rs.299\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*299;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==4)
			  {
				printf("Cost of each Sanitizer is Rs.555\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*555;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==5)
			  {
				printf("Cost of each Gloves is Rs.499\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*499;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==6)
			  {
		        printf("Cost of each PPE is Rs.699\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*699;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==7)
			  {
		      	printf("Cost of each Face Shields is Rs.359\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*359;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==8)
			  {
				printf("Cost of each Oxygen Concentrator is Rs.20000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*20000;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==9)
			  {
				printf("Cost of each Non-contact Forehead Thermometer is Rs.1599\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*1599;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
		      else if(code==10)
			  {
		       	printf("Cost of each Hand Wash is Rs.159\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT2=qty*159;
		  	    sum1=sum1+TOTAL_AMOUNT2;

			  }
        }

    }
                return sum1;

}
int fashion()
{
            int y, x=10;
            int code,TOTAL_AMOUNT3,qty,size;
            int sum2=0;
            printf("\n\t\t\t\t Welcome to Fashion Section");
            while(x!=0)
            {
                printf("\nIf you want to Purchase\n Single Item Press:0\n Multiple Items Press:1\n");
                scanf("%d",&y);
                if(y==0)
                {
                    printf("\nPlease follow the given codes to make your purchase\n 0=>Enter 0 for NONE\n 1=>track pants \n 2=>hoddies/t-shirts \n 3=>jeans pants \n 4=>3/4 shorts \n 5=>blazzers \n 6=>casual shoes \n 7=>sports shoes \n 8=>inners \n 9=>kids \n 10=>accessories \n"  );
                    scanf("%d",&code);
                    if(code==0)
                    {
                        printf("YOU Entered NONE");
                        TOTAL_AMOUNT3=0;
                    }

                    else if(code==1)
		           {
                      printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                      scanf("%d",&size);
		              printf("the cost of track pants : 699/- \n");
		              printf("Enter Quantity you require: ");
		              scanf("%d",&qty);
		              TOTAL_AMOUNT3=qty*699;
		              sum2=sum2+TOTAL_AMOUNT3;

		           }
		       else if(code==2)
		           {
                      printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                      scanf("%d",&size);
		            	printf("the cost of hoddies and t-shirts : 999/- \n");
		  	          printf("Enter Quantity you require: ");
		  	          scanf("%d",&qty);
		  	          TOTAL_AMOUNT3=qty*999;
		  	          sum2=sum2+TOTAL_AMOUNT3;

		            }
			   else if(code==3)
			       {
			          printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                      scanf("%d",&size);
                      printf("the cost of jean pant : 1299 /- \n");
		  	          printf("Enter Quantity you require: ");
		  	          scanf("%d",&qty);
		  	          TOTAL_AMOUNT3=qty*1299;
		  	          sum2=sum2+TOTAL_AMOUNT3;

			       }
		  	    else if(code==4)
		  	        {
                        printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                        scanf("%d",&size);
		  	         	printf("the cost of 3/4 shorts : 299 /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*299;
		  	            sum2=sum2+TOTAL_AMOUNT3;

			        }
			    else if(code==5)
			        {
                         printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                         scanf("%d",&size);
			           	printf("the cost of blazzer set : 4999 /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*4999;
		  	            sum2=sum2+TOTAL_AMOUNT3;

			        }
			    else if(code==6)
			        {
                          printf("please select your foot size : \n 1.6' \n 2.7'\n 3.8' \n 4.9'\n 5.10' \n 6.11' ");
                          scanf("%d",&size);
			            	printf("the cost of casual shoes : 599 /- \n");
		  	              printf("Enter Quantity you require: ");
		  	              scanf("%d",&qty);
		  	              TOTAL_AMOUNT3=qty*599;
		  	              sum2=sum2+TOTAL_AMOUNT3;

			        }
			   else if(code==7)
			       {
                      printf("please select your foot size : \n 1.6' \n 2.7'\n 3.8' \n 4.9'\n 5.10' \n 6.11' ");
                      scanf("%d",&size);
			        	printf("The cost of sports shoes : Rs.999/- \n");
		  	          printf("Enter Quantity you require: ");
		  	          scanf("%d",&qty);
		  	          TOTAL_AMOUNT3=qty*999;
		  	          sum2=sum2+TOTAL_AMOUNT3;

			        }
			   else if(code==8)
			       {
                       printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                       scanf("%d",&size);
			        	printf("the cost of inners set : 899 (pack of 3) \n");
		  	           printf("Enter Quantity you require: ");
		  	           scanf("%d",&qty);
		  	           TOTAL_AMOUNT3=qty*899;
		  	           sum2=sum2+TOTAL_AMOUNT3;

			        }
			   else if(code=9)
			       {
                        printf("please select child age : \n 1.3-4 years \n 2.5-6 years \n 3.7 to 10 years \n 4.11 to 13 years ");
                        scanf("%d",&size);
			          	printf("To the kids section any of item is 299/- only\n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*299;
		  	            sum2=sum2+TOTAL_AMOUNT3;

			       }
			   else if(code==10)
			       {
			         	printf("you can select the belongings of personal with cost of 599 /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*599;
		  	            sum2=sum2+TOTAL_AMOUNT3;

		  	        }
		  	        x=0;
                }
                else
                {
                    printf("\nPlease follow the given codes to make your purchase\n 0=>Enter 0 for NONE\n 1=>track pants \n 2=>hoddies/t-shirts \n 3=>jeans pants \n 4=>3/4 shorts \n 5=>blazzers \n 6=>casual shoes \n 7=>sports shoes \n 8=>inners \n 9=>kids \n 10=>accessories \n"  );
                    scanf("%d",&code);
                    if(code==0)
                    {
                        printf("YOU Entered NONE");
                        TOTAL_AMOUNT3=0;
                    }

                    else if(code==1)
		           {
                      printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                      scanf("%d",&size);
		              printf("the cost of track pants : 699/- \n");
		              printf("Enter Quantity you require: ");
		              scanf("%d",&qty);
		              TOTAL_AMOUNT3=qty*699;
		              sum2=sum2+TOTAL_AMOUNT3;

		           }
		       else if(code==2)
		           {
                      printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                      scanf("%d",&size);
		            	printf("the cost of hoddies and t-shirts : 999/- \n");
		  	          printf("Enter Quantity you require: ");
		  	          scanf("%d",&qty);
		  	          TOTAL_AMOUNT3=qty*999;
		  	          sum2=sum2+TOTAL_AMOUNT3;

		            }
			   else if(code==3)
			       {
			          printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                      scanf("%d",&size);
                      printf("the cost of jean pant : 1299 /- \n");
		  	          printf("Enter Quantity you require: ");
		  	          scanf("%d",&qty);
		  	          TOTAL_AMOUNT3=qty*1299;
		  	          sum2=sum2+TOTAL_AMOUNT3;

			       }
		  	    else if(code==4)
		  	        {
                        printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                        scanf("%d",&size);
		  	         	printf("the cost of 3/4 shorts : 299 /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*299;
		  	            sum2=sum2+TOTAL_AMOUNT3;

			        }
			    else if(code==5)
			        {
                         printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                         scanf("%d",&size);
			           	printf("the cost of blazzer set : 4999 /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*4999;
		  	            sum2=sum2+TOTAL_AMOUNT3;

			        }
			    else if(code==6)
			        {
                          printf("please select your foot size : \n 1.6' \n 2.7'\n 3.8' \n 4.9'\n 5.10' \n 6.11' ");
                          scanf("%d",&size);
			            	printf("the cost of casual shoes : 599 /- \n");
		  	              printf("Enter Quantity you require: ");
		  	              scanf("%d",&qty);
		  	              TOTAL_AMOUNT3=qty*599;
		  	              sum2=sum2+TOTAL_AMOUNT3;

			        }
			   else if(code==7)
			       {
                      printf("please select your foot size : \n 1.6' \n 2.7'\n 3.8' \n 4.9'\n 5.10' \n 6.11' ");
                      scanf("%d",&size);
			        	printf("The cost of sports shoes : Rs.999/- \n");
		  	          printf("Enter Quantity you require: ");
		  	          scanf("%d",&qty);
		  	          TOTAL_AMOUNT3=qty*999;
		  	          sum2=sum2+TOTAL_AMOUNT3;

			        }
			   else if(code==8)
			       {
                       printf("please select your waist size : \n 1.small \n 2.medium\n 3.large \n 4.extra large ");
                       scanf("%d",&size);
			        	printf("the cost of inners set : 899 (pack of 3) \n");
		  	           printf("Enter Quantity you require: ");
		  	           scanf("%d",&qty);
		  	           TOTAL_AMOUNT3=qty*899;
		  	           sum2=sum2+TOTAL_AMOUNT3;

			        }
			   else if(code=9)
			       {
                        printf("please select child age : \n 1.3-4 years \n 2.5-6 years \n 3.7 to 10 years \n 4.11 to 13 years ");
                        scanf("%d",&size);
			          	printf("To the kids section any of item is 299/- only\n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*299;
		  	            sum2=sum2+TOTAL_AMOUNT3;

			       }
			   else if(code==10)
			       {
			         	printf("you can select the belongings of personal with cost of 599 /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT3=qty*599;
		  	            sum2=sum2+TOTAL_AMOUNT3;

		  	        }
                }
            }

		  	        return sum2;
}
int pantry()
{
    int x=10,y;
    int code,qty,TOTAL_AMOUNT4;
    int sum3=0;
    printf("\n\t\t\t\t Welcome to Pantry Section");
        while(x!=0)
        {
           printf("\nIf you want to Purchase\n Single Item Press:0\n Multiple Items Press:1\n");
           scanf("%d",&y);
           if(y==0)
           {
                    printf("Please follow the given codes to make your purchase\n 0=>Enter 0 for NONE\n 1=>potatoes and tomatoes \n 2=>wheat and corn flour\n 3=>brown sugar \n 4=>chicken broth \n 5=>fish sauce\n 6=>olive oil \n 7=>cereals and oatmeal \n 8=>pasta \n 9=>honey \n"  );
	                scanf("%d",&code);
	                if(code==0)
                    {
                        printf("YOU Entered NONE");
                        TOTAL_AMOUNT4=0;
                    }
                    else if(code==1)
		            {
		            	printf("the cost of potatoes and tomatoes : Rs.45(per kg)/- \n");
		                printf("Enter Quantity you require: ");
		                scanf("%d",&qty);
		                TOTAL_AMOUNT4=qty*45;
		                sum3=sum3+TOTAL_AMOUNT4;

		             }
                    else if(code==2)
		             {

  	                    printf("the cost of wheat and corn flour : Rs.128(per kg)/- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*128;
		  	            sum3=sum3+TOTAL_AMOUNT4;

		             }
                    else if(code==3)
			           {
			               printf("the cost of brown sugar : Rs.176(per kg) /- \n");
		  	               printf("Enter Quantity you require: ");
		  	               scanf("%d",&qty);
		  	               TOTAL_AMOUNT4=qty*176;
		  	               sum3=sum3+TOTAL_AMOUNT4;

			           }
                    else if(code==4)
		  	        {

		  	           	printf("the cost of chicken broth : Rs.215(per kg) /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*215;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==5)
			        {
			         	printf("the cost of fish sauce :Rs. 285(per bottle)( /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*285;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==6)
			        {
			        	printf("the cost of olive oil :Rs. 384(per litre) /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*384;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==7)
			        {

			        	printf("The cost of cereals and oatmeal : Rs.450(pack of 2)/- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*450;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==8)
			       {
			        	printf("the cost of pasta : Rs.590 (pack of 9) \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*590;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			       }
			      else if(code=9)
			       {

			        	printf("the cost of honey : RS.195 (per bottle)/- only\n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*195;
		  	            sum3=sum3+TOTAL_AMOUNT4;

		  	        }
		  	         x=0;

            }
            else
            {
               printf("Please follow the given codes to make your purchase\n 0=>Enter 0 for NONE\n 1=>potatoes and tomatoes \n 2=>wheat and corn flour\n 3=>brown sugar \n 4=>chicken broth \n 5=>fish sauce\n 6=>olive oil \n 7=>cereals and oatmeal \n 8=>pasta \n 9=>honey \n"  );
	                scanf("%d",&code);
	                if(code==0)
                    {
                        printf("YOU Entered NONE");
                        TOTAL_AMOUNT4=0;
                    }
                    else if(code==1)
		            {
		            	printf("the cost of potatoes and tomatoes : Rs.45(per kg)/- \n");
		                printf("Enter Quantity you require: ");
		                scanf("%d",&qty);
		                TOTAL_AMOUNT4=qty*45;
		                sum3=sum3+TOTAL_AMOUNT4;

		             }
                    else if(code==2)
		             {

  	                    printf("the cost of wheat and corn flour : Rs.128(per kg)/- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*128;
		  	            sum3=sum3+TOTAL_AMOUNT4;

		             }
                    else if(code==3)
			           {
			               printf("the cost of brown sugar : Rs.176(per kg) /- \n");
		  	               printf("Enter Quantity you require: ");
		  	               scanf("%d",&qty);
		  	               TOTAL_AMOUNT4=qty*176;
		  	               sum3=sum3+TOTAL_AMOUNT4;

			           }
                    else if(code==4)
		  	        {

		  	           	printf("the cost of chicken broth : Rs.215(per kg) /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*215;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==5)
			        {
			         	printf("the cost of fish sauce :Rs. 285(per bottle)( /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*285;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==6)
			        {
			        	printf("the cost of olive oil :Rs. 384(per litre) /- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*384;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==7)
			        {

			        	printf("The cost of cereals and oatmeal : Rs.450(pack of 2)/- \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*450;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			        }
                    else if(code==8)
			       {
			        	printf("the cost of pasta : Rs.590 (pack of 9) \n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*590;
		  	            sum3=sum3+TOTAL_AMOUNT4;

			       }
			      else if(code=9)
			       {

			        	printf("the cost of honey : RS.195 (per bottle)/- only\n");
		  	            printf("Enter Quantity you require: ");
		  	            scanf("%d",&qty);
		  	            TOTAL_AMOUNT4=qty*195;
		  	            sum3=sum3+TOTAL_AMOUNT4;

		  	        }
            }


        }


			       return sum3;
}
int furniture()
{
    int x=10,y;
    int code,TOTAL_AMOUNT5,qty;
    int sum4=0;
    printf("\n\t\t\t\t Welcome to Furniture Section");
    while(x!=0)
    {
        printf("\nIf you want to Purchase\n Single Item Press:0\n Multiple Items Press:1\n");
        scanf("%d",&y);
        if(y==0)
        {
            printf("\nPlease follow the given codes to make your purchase\n 0=> Enter 0 for NONE\n 1 => Sofas\n 2 => Living Room Tables\n 3 => Beds\n 4 => Study Desks\n 5 => Chairs\n 6 => Almirahs\n 7 => Dining Tables\n 8 => Coffee Tables\n 9 => Display Shelf\n 10 => Dressers\n");
	        	scanf("%d",&code);
	        	if(code==0)
                    {
                        printf("YOU Entered NONE");
                        TOTAL_AMOUNT5=0;
                    }
	        	else if(code==1)
			  {
				printf("Cost of each Sofa is Rs.63,500\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*63500;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==2)
			  {
				printf("Cost of each Living Room Table is Rs.25,000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*25000;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==3)
			  {
				printf("Cost of each Bed is Rs.36,500\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*36500;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==4)
			  {
				printf("Cost of each Study Desk is Rs.16,000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*16000;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==5)
			  {
				printf("Cost of each Chair is Rs.499\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*499;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==6)
			  {
		        printf("Cost of each Almirah is Rs.27,000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*27000;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==7)
			  {
		      	printf("Cost of each Dining Table is Rs.29,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*29999;
		  	    sum4=sum4+TOTAL_AMOUNT5;
			  }
		      else if(code==8)
			  {
				printf("Cost of each Coffee Table is Rs.20,599\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*20599;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==9)
			  {
				printf("Cost of each Display Shelf is Rs.25,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*25999;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==10)
			  {
		       	printf("Cost of each Dresser is Rs.15999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*15999;
		  	    sum4=sum4+TOTAL_AMOUNT5;

		  	  }
		  	   x=0;
        }
        else
        {
             printf("\nPlease follow the given codes to make your purchase\n 0=> Enter 0 for NONE\n 1 => Sofas\n 2 => Living Room Tables\n 3 => Beds\n 4 => Study Desks\n 5 => Chairs\n 6 => Almirahs\n 7 => Dining Tables\n 8 => Coffee Tables\n 9 => Display Shelf\n 10 => Dressers\n");
	        	scanf("%d",&code);
	        	if(code==0)
                    {
                        printf("YOU Entered NONE");
                        TOTAL_AMOUNT5=0;
                    }
	        	else if(code==1)
			  {
				printf("Cost of each Sofa is Rs.63,500\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*63500;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==2)
			  {
				printf("Cost of each Living Room Table is Rs.25,000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*25000;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==3)
			  {
				printf("Cost of each Bed is Rs.36,500\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*36500;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==4)
			  {
				printf("Cost of each Study Desk is Rs.16,000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*16000;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==5)
			  {
				printf("Cost of each Chair is Rs.499\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*499;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==6)
			  {
		        printf("Cost of each Almirah is Rs.27,000\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*27000;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==7)
			  {
		      	printf("Cost of each Dining Table is Rs.29,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*29999;
		  	    sum4=sum4+TOTAL_AMOUNT5;
			  }
		      else if(code==8)
			  {
				printf("Cost of each Coffee Table is Rs.20,599\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*20599;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==9)
			  {
				printf("Cost of each Display Shelf is Rs.25,999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*25999;
		  	    sum4=sum4+TOTAL_AMOUNT5;

			  }
		      else if(code==10)
			  {
		       	printf("Cost of each Dresser is Rs.15999\n");
		  	    printf("Enter Quantity you require: ");
		  	    scanf("%d",&qty);
		  	    TOTAL_AMOUNT5=qty*15999;
		  	    sum4=sum4+TOTAL_AMOUNT5;

		  	  }
        }

    }


                return sum4;
}
void time()
{
		time_t now; time(&now);
	printf("\n");
	printf("\t\t\t\t\t\t %s",ctime(&now));
}

int main()
{
    int limit,x=10;
    int phno;
    char *name;
    loadingBar();
    system("CLS");
    limit=10;
	printf("\n\t\t\t\t Welcome to ShoppyNation\n");
	printf("\t\t\t\t Please Enter Your Name\n");
    name=(char*)malloc(limit*sizeof(char));
	getchar();
	gets(name);
	system("CLS");
	time();
	printf("\n\n\n\t\t\t\t Hi %s.Good to see you here\n\n\n",name);
	printf("\n\n Introducing you to ShoppyNation where you can explore the world of virtual market\n");
	printf("\n ShoppyNation is a one-stop destination where you can find all varities of items at affordable prices.\n\n\n\tClick below to get started\n\n\n");
	system("PAUSE");
	system("CLS");
	int discount,offer,tax,charge,tax1,discount1;
    int TOTAL_AMOUNT1,a,wallet,details,pay,account,elecbill,essbill,bill_total,fashion_bill,pantry_bill,furniture_bill,card_number;
    elecbill=electronics();
    shift();
    essbill=essentials();
    shift();
    fashion_bill=fashion();
    shift();
    pantry_bill=pantry();
    shift();
    furniture_bill=furniture();
    bill_total=elecbill+essbill+fashion_bill+pantry_bill+furniture_bill;
    offer=(10*bill_total)/100;
    tax1=(2*bill_total)/100;
    discount=bill_total-offer;
    charge=bill_total+tax1;
    discount1=bill_total-1500;
    tax=bill_total+500;
    printf("\n Press Any Key To Proceed to Payments\n");
			    system("PAUSE");
                system("CLS");
                printf("LOADING!!!!!!\n");
			    for( a=1;a<8;a++)
	            {
                    Sleep(500);
                    printf("...");
                }
               system("CLS");
               printf("\n\t 10 percent discount available on all CREDIT/DEBIT cards\n");
               printf("\n\t\t 2 percent Internet Charges are applied on NET BANKING\n");
               printf("\n\t\t\t Pay through your UPI Wallet and get a Cashback of upto 1500/- \n\n");
               printf("\n please select your payment method : \n 1.Credit/Debit card \n 2.Net banking \n 3.Wallet \n 4.Cash On Delivery \n ");
               scanf("%d",&pay);
               if(pay==1)
               {
                   printf("GIVE YOUR CARD NUMBER:");
                   scanf("%d",&card_number);
                   printf("Enter your mobile number: ");
                   scanf("%d",&phno);
                   generate();
                   system("CLS");
                   printf("\nYour OTP for current purchase is 3658\n");
                    while (x!=0)
                    {
                        printf("please enter your ONE TIME PASSWORD(OTP):");
                        scanf("%d",&details);
                        printf("\t\t\t\tAnalyzing OTP....\n");
                        printf("\t\t\t\tPlease Wait......\n");
                        for( a=1;a<8;a++)
                        {
                            Sleep(600);
                            printf("...");
                        }

                        if (details==3658)
                        {
                            Beep(600,500);
                            Beep(700,500);
                            Beep(800,500);
                            printf("\nCorrect OTP Entered\n");
                            x=0;
                        }
                        else
                        {
                            Beep(1100,500);
                            Beep(900,600);
                            printf("\nINCORRECT OTP, PLEASE TRY AGAIN");
                        }
                            printf("\n");
                     }
                   payment();
                            printf("\nYour total Bill is %d",bill_total);
                            printf("\nOffer Availed of Rs.%d",offer);
                            printf("\n\t\t\t %d amount you have paid \n\t\t\t payment successful",discount);
                            printf("\n Press Any Key To Generate Bill\n");
                system("PAUSE");
                system("CLS");

                printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
                for( a=1;a<8;a++)
                {
                    Sleep(500);
                    printf("...");
                }
                printf("\n\n\t\t\t\t\tBill Generated. \n\n");
                system("PAUSE");
                system("CLS");

                printf("\n");
                printf("\t\t\t====================================================\n");
                printf("\t\t\t\t SHOPPYNATION BILL\n");
                time();
                printf("\t\t\t====================================================\n");
                printf("\t\t\t      Item Description \t   Total Price/-\n");
                printf("\t\t\t\t ----------- \t  -----------\n\n");
                printf("\t\t\t \t Electronics            %d \n",elecbill);
                printf("\t\t\t  \t Essentials             %d \n",essbill);
                printf("\t\t\t   \t Fashion                %d  \n",fashion_bill);
                printf("\t\t\t    \t Pantry                 %d  \n",pantry_bill);
                printf("\t\t\t     \t Furniture              %d  \n\n",furniture_bill);
                printf("\t\t\t                              ---------\n\n");
                printf("\t\t\t       \t Customer Name:         %s     \n", name);
                printf("\t\t\t       \t Total Amount:          %d   \n", bill_total);
                printf("\t\t\t       \t Offer Availed:         %d   \n",offer);
                printf("\t\t\t       \t Amount Paid:           %d   \n",discount);
                printf("\t\t\t       \t Payment Method:        Card Payment \n");
                printf("\t\t\t====================================================\n\n");
                printf("\t\t\t\t\t\tEnd of bill\n\n");



                    printf("\n\n\t\t\t\t\t Thank you for Shopping with us\n\n");
                    printf("\n\t\t\t\t\t Hope we see you soon again\n\n\n\n\n");
                    printf("\n");
                    }
               else if(pay==2)
               {
                   printf("Enter Mobile number: ");
                   scanf("%d",&phno);
                   generate();
                   system("CLS");
                   printf("Your OTP for current purchase is 3214789\n");
                    while (x!=0)
                    {
                        printf("Enter your OTP: ");
                        scanf("%d",&account);
                        printf("\t\t\t\tAnalyzing OTP....\n");
                        printf("\t\t\t\tPlease Wait......\n");
                        for( a=1;a<8;a++)
                        {
                            Sleep(600);
                            printf("...");
                        }

                        if (account==3214789)
                        {
                            Beep(600,500);
                            Beep(700,500);
                            Beep(800,500);
                            printf("\nCorrect OTP Entered\n");
                            x=0;
                        }
                        else
                        {
                            Beep(1100,500);
                            Beep(900,600);
                            printf("\nINCORRECT OTP, PLEASE TRY AGAIN");
                          getch();
                        }
                            printf("\n");
                     }
                    payment();
                    printf("\n\t\t\t Your Total Bill is %d",bill_total);
                    printf("\n\t\t\t Internet Charges: %d",tax1);
                    printf("\n\t\t\t %d amount you have paid \n\t\t\t payment successful",charge);
                    printf("\n Press Any Key To Generate Bill\n");
                    system("PAUSE");
                    system("CLS");

                printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
                for( a=1;a<8;a++)
                {
                    Sleep(500);
                    printf("...");
                }
                printf("\n\n\t\t\t\t\tBill Generated. \n\n");
                system("PAUSE");
                system("CLS");

                printf("\n");
                printf("\t\t\t====================================================\n");
                printf("\t\t\t\t SHOPPYNATION BILL\n");
                time();
                printf("\t\t\t====================================================\n");
                printf("\t\t\t      Item Description \t   Total Price/-\n");
                printf("\t\t\t\t ----------- \t  -----------\n\n");
                printf("\t\t\t \t Electronics            %d \n",elecbill);
                printf("\t\t\t  \t Essentials             %d \n",essbill);
                printf("\t\t\t   \t Fashion                %d  \n",fashion_bill);
                printf("\t\t\t    \t Pantry                 %d  \n",pantry_bill);
                printf("\t\t\t     \t Furniture              %d  \n\n",furniture_bill);
                printf("\t\t\t                              ---------\n\n");
                printf("\t\t\t       \t Customer Name:         %s     \n", name);
                printf("\t\t\t       \t Total Amount:          %d   \n", bill_total);
                printf("\t\t\t       \t Internet Charges:      %d   \n",tax1);
                printf("\t\t\t       \t Amount Paid:           %d    \n",charge);
                printf("\t\t\t       \t Payment Method:        Net Banking \n");
                printf("\t\t\t====================================================\n\n");
                printf("\t\t\t\t\t\tEnd of bill\n\n");



                    printf("\n\n\t\t\t\t\t Thank you for Shopping with us\n\n");
                    printf("\n\t\t\t\t\t Hope we see you soon again\n\n\n\n\n");
                    printf("\n");
               }
              else if(pay==3)
               {
                   printf("Enter your mobile number: ");
                   scanf("%d",&phno);
                   generate();
                   system("CLS");
                   printf("Your OTP for current purchase is 258741\n");
                   while (x!=0)
                    {

                        printf("Enter OTP: ");
                        scanf("%d",&wallet);
                        printf("\t\t\t\tAnalyzing OTP....\n");
                        printf("\t\t\t\tPlease Wait......\n");
                        for( a=1;a<8;a++)
                        {
                            Sleep(600);
                            printf("...");
                        }

                        if (wallet==258741)
                        {
                            Beep(600,500);
                            Beep(700,500);
                            Beep(800,500);
                            printf("\nCorrect OTP Entered\n");
                            x=0;
                        }
                        else
                        {
                            Beep(1100,500);
                            Beep(900,600);
                            printf("\nINCORRECT OTP, PLEASE TRY AGAIN");
                        }
                            printf("\n");
                     }
                     payment();
                     printf("\nYour total bill is %d \n",bill_total);
                     printf("\n\t\t\t %d amount you have paid through your wallet !!huh!!! \n\t\t\t payment successful  ",discount1);
                     printf("\n Press Any Key To Generate Bill\n");
                     system("PAUSE");
                     system("CLS");

                printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
                for( a=1;a<8;a++)
                {
                    Sleep(500);
                    printf("...");
                }
                printf("\n\n\t\t\t\t\tBill Generated. \n\n");
                system("PAUSE");
                system("CLS");

                printf("\n");
                printf("\t\t\t====================================================\n");
                printf("\t\t\t\t SHOPPYNATION BILL\n");
                time();
                printf("\t\t\t====================================================\n");
                printf("\t\t\t      Item Description \t   Total Price/-\n");
                printf("\t\t\t\t ----------- \t  -----------\n\n");
                printf("\t\t\t \t Electronics            %d \n",elecbill);
                printf("\t\t\t  \t Essentials             %d \n",essbill);
                printf("\t\t\t   \t Fashion                %d  \n",fashion_bill);
                printf("\t\t\t    \t Pantry                 %d  \n",pantry_bill);
                printf("\t\t\t     \t Furniture              %d  \n\n",furniture_bill);
                printf("\t\t\t                              ---------\n\n");
                printf("\t\t\t       \t Customer Name:         %s     \n", name);
                printf("\t\t\t       \t Total Amount:          %d   \n", bill_total);
                printf("\t\t\t       \t Cash Back:             1500/-  \n");
                printf("\t\t\t       \t Payable Amount:        %d   \n",discount1);
                printf("\t\t\t       \t Payment Method:        Wallet \n");
                printf("\t\t\t====================================================\n\n");
                printf("\t\t\t\t\t\tEnd of bill\n\n");



                    printf("\n\n\t\t\t\t\t Thank you for Shopping with us\n\n");
                    printf("\n\t\t\t\t\t Hope we see you soon again\n\n\n\n\n");
                    printf("\n");
                }
                else
                {
                    printf("\t\t\t\t You selected COD option ORDER PLACED\n");
                    printf("\t\t\t\t 500/- delivery charge is applied");
                    printf("\n\t\t\t Please pay %d amount on delivery",tax);
                }
                    printf("\t\t\t\t Press ANY Key to Shutdown the System\n");
                    system("PAUSE");
                    system("CLS");
                    shutdownBar();
                    system("CLS");
}


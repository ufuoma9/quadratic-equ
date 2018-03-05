#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    float root1,root2;
    float determinant;


    printf("DEAR USER ENTER VALUE FOR a:");
    scanf("%f",&a);

    printf("DEAR USER ENTER VALUE FOR b:");
    scanf("%f",&b);

    printf("DEAR USER ENTER VALUE FOR c:");
    scanf("%f",&c);
    
    determinant=(b*b)-(4*a*c);
    

    if (determinant>0)
    {
      root1=((-b)+(sqrt(determinant)))/(2*a);
      root2=((-b)-(sqrt(determinant)))/(2*a);
    
      printf("\nROOT1 is: %.2f",root1);
      printf("\nROOT2 is: %.2f",root2);
    }

    else if(determinant==0)
    {
        root1=(-b)/(2*a);
        root2=(-b)/(2*a);
        printf("\nROOT1 is: %.2f",root1);
        printf("\nROOT2: %.2f",root2);
    }

    else
   {
   
         printf("\nCOMPLEX ROOTS");
    
    }
           
    return 0;

}

#include <stdio.h>
int main(){

    int purchaseAmount;
    int age;
    char gender;

    printf("Enter total purchase amount:\n");
    scanf("%d", &purchaseAmount);

    printf("Enter age of shopper: \n");
    scanf("%d", &age);

    printf("Enter the gender of shopper: \n");
    scanf(" %c", &gender);

    if ((purchaseAmount>=10000)||(age>=70 &&purchaseAmount>=5000)||(gender=='F' && age>=50));
    
    {
        printf("Discount granted");
    }
    else
        
    {

        printf("Discount denied");
    }
  
   
    return 0;
}
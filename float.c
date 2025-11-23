#include<stdio.h>
int main()
{
    int size = 5;
    float average=0;
    float sum = 0;
    int marks[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: \n",i + 1);
        scanf("%d",&marks[i]);
    }
        for(int i = 0; i < 5; i ++)
        {
            sum +=  marks[i];
        }
        average=sum/size;
        printf("The total marks is: %d\n",sum);
        printf("The average marks is: %.1f\n",average);

       
    return 0;
}